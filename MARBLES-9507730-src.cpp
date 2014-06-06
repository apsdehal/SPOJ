#include <cstdio>
using namespace std;
long long int ans;int i;
long long int comb(int n,int r){
	if(r==0 || n==r) return 1;
	ans=1;
	r=r>n-r?n-r:r;
	i=1;
	for(;i<=r;i++,n--){
		if(n%i==0){
			ans*=(n/i);
		}else {
			if(ans%i==0){
				ans=(ans/i)*n;
			} else {
				ans=(ans*n)/i;
			}
		}

	}
	return ans;
}
int main(){
	int t,m,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&m,&n);
		printf("%lld\n",comb(m-1,n-1));
	}
	return 0;
}
