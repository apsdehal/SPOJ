#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int t;
	long long n,k;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		if(n==1){
			printf("poor conductor\n");
			continue;
		}if((n-1)%5==0)k=(int)ceil((n-1)/5);
		else k=(int)ceil((n-1)/5)+1;
		printf("%lld ",k);
		if(k%2!=0){
		if((n-1)%5==1 || (n-1)%5== 0 ) printf("W ");
		else if((n-1)%5==2 ||(n-1)%5== 3 ) printf("A ");
		else printf("M ");
		if((n-1)%5==1 || (n-1)%5==2) printf("L\n");
		else printf("R\n");}
		else{if((n-1)%5==1 || (n-1)%5== 0 ) printf("W ");
		else if((n-1)%5==4 ||(n-1)%5== 3 ) printf("A ");
		else printf("M ");
		if((n-1)%5==0 || (n-1)%5==4) printf("L\n");
		else printf("R\n");}


	}return 0;
}
