#include <cstdio>
#include <algorithm>
using namespace std;
int a[1001],b[1001];
int main(){
	int t,k,i,sum;
	scanf("%d",&t);
	while(t--){sum=0;
		scanf("%d",&k);
		
		for(i=0;i<k;i++)
			scanf("%d",&a[i]);
		for(i=0;i<k;i++)
			scanf("%d",&b[i]);
		sort(a,a+k);
		sort(b,b+k);
		for(i=0;i<k;i++)
			sum+=(a[i]*b[i]);
		printf("%d\n",sum);
	}
}
