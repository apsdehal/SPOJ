/*Created by apsdehal
 * on
 * 23/6/13
 */
#include <cstdio>
int getFills(int a, int b, int c){
	 int A=0,B=0,fills=0;
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
int getMin(int a,int b){
	return a<b?a:b;
	}
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main(){
	int a,b,c,t,z;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&a,&b,&c);
		if(c>a && c>b){
			printf("-1\n");
		} else if(c==a || c==b)
			printf("1\n");
		else if(c%gcd(a,b)!=0)
			printf("-1\n");
		else{
			z=getMin(getFills(a,b,c),getFills(b,a,c));
			printf("%d\n",z);
		}
	}
	return 0;

}
