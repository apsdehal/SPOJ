#include<cstdio>
using namespace std;
int main(){
	int t,m,n,i,j,prev,div;
	scanf("%d\n",&t);
	while(t--){
		scanf("%d %d\n",&m,&n);
		bool *primes=new bool [n-m+1];
		for(i=0;i<=n-m;i++)
			primes[i]=0;
		for(i=2;i*i<=n;i++){
			div=m/i;
			div*=i;
			for(j=div;j<=n;j+=i)
				if(j!=i && j>=m)
					primes[j-m]=1;
		}
		for(i=0;i<n-m+1;i++){
			if(primes[i]==0 && (m+i)!=1)
				printf("%d\n",m+i);
		}
		if(t)
			printf("\n");
		delete [] primes;
	}
}