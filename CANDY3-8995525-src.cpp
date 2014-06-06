#include <cstdio>
int main(){
	int k,n,i;
	long long a, sum;
	scanf("%d",&k);
	while(k--){sum=0;
		printf("\n");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&a);
			sum=(sum+a)%n;
		}
		if(sum%n==0) printf("YES\n");
		else printf("NO\n");

	}return 0;
}


