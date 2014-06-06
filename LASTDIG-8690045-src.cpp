#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
int zad[][4] ={{0, 0, 0, 0}, {1, 1, 1, 1},{2, 4, 8, 6}, {3, 9, 7, 1},{4, 6, 4, 6}, {5, 5, 5, 5},
{6, 6, 6, 6}, {7, 9, 3, 1},
{8, 4, 2, 6}, {9, 1, 9, 1}};
int t;
scanf("%d",&t);
string a;
int b;
while(t--) {
cin >> a;scanf("%d",&b);
if(b==0) {
printf("1\n");
} else {
int aa = a[a.size()-1] - '0';
b %= 4;
b = (b == 0) ? 3 : b-1;
printf("%d\n",zad[aa][b]);
}
}
return 0;
}
