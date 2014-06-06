/*Created by apsdehal
 * on
 * 23/6/13
 */
#include <cstdio>
/*long long int getFills(long long int a,long long int b, int c){
	 long long int A=0,B=0,fills=0;
	 while(1){
	 if(A==c || B==c)return fills;
	 if(A==0){
		 A=a;
	 }
	 else if(B==b){
		 B=0;
	 }
	 else {
		 if(A>=(b-B)){
			 A-=(b-B);
			 B=b;

		 }
		 else {
			 B+=A;
			 A=0;
		 }
	 } fills++;
	 }
}
long long int getMin(long long int a,long long int b){
	return a<b?a:b;
	}*/
long long int gcd(long long int a,long long int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
	long long int a,b,c,t,z;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(c>a && c>b){
			printf("NO\n");
		} else if(c==a || c==b)
			printf("YES\n");
		else if(c%gcd(a,b)!=0)
			printf("NO\n");
		else printf("YES\n");
	}
	return 0;

}
