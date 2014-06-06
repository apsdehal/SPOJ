#include <cstdio>
#include <cmath>
int main(){
	int t;
	long long int a;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&a);
		if(a==0 || a==1|| a==2) printf("1\n");
		else {
			printf("%lld\n",(long long int)floor((log(2*acos(-1)*a)/2+a*log(a)-a)/log(10))+1);
		}
	}
	return 0;
}