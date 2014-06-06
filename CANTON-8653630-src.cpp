#include <cstdio>
#include <cmath>
using namespace std;
int main() {
	long long int N,n,k,m;
	int t;
	scanf("%d",&t);
	while(t--) {
		scanf("%lld",&N);
		n= ceil(-0.5+sqrt(1+8*N)*0.5);
		k=(n*n+n)/2-N+1;
		m = n-((n*n+n)/2-N);
		if(n%2==0) printf("TERM %lld IS %lld/%lld\n",N,m,k);
		else printf("TERM %lld IS %lld/%lld\n",N,k,m);
	}
	return 0;
}
