#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    long long int k;
    int j;

	scanf("%d", &j);
	while(j--){
		scanf("%lld",&k);
		if(k==0){printf("0\n");}
		else {k=(floor((k*(k+1)/6)));
		printf("%lld\n",k);
	}}
	return 0;
}





