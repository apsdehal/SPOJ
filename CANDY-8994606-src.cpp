#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n=0,count=0,i;
	int sum;
	while(scanf("%d",&n)){if(n==-1) return 0;
	sum=0;count=0;

		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum%n!=0) printf("%d\n",-1);
		else{sum=sum/n;
		sort(a,a+n);
		for(i=0;i<n;i++){
			if(a[i]>sum) break;
			else count+=(sum-a[i]);
		}
		printf("%d\n",count);
		}
	}return 0;
}
