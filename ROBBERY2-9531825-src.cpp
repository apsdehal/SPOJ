#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int test,k;
	long long sum,s,n,p;
	scanf("%d",&test);
	while(test--){
		scanf("%lld %d",&sum,&k);
		long long int each[k];
		n=0.5*(sqrt(1+8*sum)-1);
		p=n/k;
		n=p*k;
		for(int i=1;i<=k;i++){each[i-1]=(2*i+(p-1)*k)*p*0.5;}
		s = n+1; sum-=n*(n+1)/2;
		for(int i=0;i<k && sum>0 ;i++){
			if(s<=sum){
				each[i]+=s;
				sum-=s++;
			} else {
				each[i]+=sum;
				sum=0;
			}
		}

		printf("%lld", each[0]);
		for(int i=1;i<k;i++)
			printf(" %lld",each[i]);
		printf("\n");
	}
	return 0;
}




