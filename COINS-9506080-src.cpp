#include <cstdio>
using namespace std;
long long int a[10000001],k1,k2,k3;
long long int getMaxNo(long long int n){
	if(n<10000000)
	return a[n];
	long long int t1,t2,t3;
	{
		t1 = getMaxNo(n / 2);
	t2 = getMaxNo(n / 3);
	t3 = getMaxNo(n / 4);
	if(t1 + t2 + t3 >= n)
	return (t1 + t2 + t3);
	else
	return n;
	}


}
int main(){
	a[0]=0;
	a[1]=1;
	a[2]=2;
	long long int i;
	for(i=3;i<10000000;i++){
		k1=i/2;
		k2=i/3;
		k3=i/4;
		int c= a[k1]+a[k2]+a[k3];
		if(c>i) a[i]=c;
		else a[i]=i;
	}
	long long int t,ans;
	while(scanf("%lld",&t)!= EOF){
		ans=0;
		ans=getMaxNo(t);
		if(ans>=t){
		printf("%lld\n",ans);
	} else {
		printf("%lld\n",t);
	}
		
	}
	return 0;
}
