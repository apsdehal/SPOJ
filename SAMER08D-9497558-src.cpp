#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
 
char a[1001], b[1001];
int len_a, len_b, k;
 
int segt[1001][1001];
int len[1001][1001];
 
int main() {
 
    for(;;) {
        cin >> k;
        if (!k) break;
        cin >> a >> b;
 
        len_a = strlen(a);
        len_b = strlen(b);
 
        for(int i = 0; i <= len_a; i++) segt[0][i] = len[0][i] = 0;
        for(int i = 0; i <= len_b; i++) segt[i][0] = len[i][0] = 0;
 
        for(int i = 1; i <= len_a; i++) {
            for(int j = 1; j <= len_b; j++) {
                segt[i][j] = 0;
                len[i][j] = max(len[i][j - 1], len[i - 1][j]);
 
                if (a[i-1] == b[j-1]) {
                    segt[i][j] = segt[i - 1][j - 1] + 1;
                    if (segt[i][j] >= k) {
                        for(int p = k; p <= segt[i][j]; p++) {
                            len[i][j] = max(len[i][j], len[i - p][j - p] + p);
                        }
                    }
                }
            }
        }
 
        cout << len[len_a][len_b] << endl;
    }
}