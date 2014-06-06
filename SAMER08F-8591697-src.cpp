#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
	while(1) {
		scanf("%d", &n);
		if(n==0) break;
		int k = (n*(n+1)*(2*n+1))/6;
		printf("%d\n",k);
	}
    return 0;
}

