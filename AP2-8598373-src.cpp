#include <iostream>
#include <cstdio>
using namespace std;

void f(long long int x,long long int y,long long int z) {
    long long int a,d,n,i;
	n=(2*z/(x+y));
	d=(x-y)/(5-n);
	a=x-2*d;
    printf("%Ld\n", n);
	for(i=1;i<=n;i++){
		printf("%Ld ", (a+(i-1)*d));
	}
	printf("\n");
}
int main() {
	long long int x,y,z;
	int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%Ld %Ld %Ld ", &x, &y, &z);
		f(x,y,z);

	}
	return 0;
}



