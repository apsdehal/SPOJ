#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int n=1,i;
	while(1){
		scanf("%d",&n);if(n==0)break;
		int a[n];
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		sort(a,a+n);
		if(1422-a[n-1]>100){printf("IMPOSSIBLE\n");continue;}

		for(i=0;i<n;i++){
			if((a[i+1]-a[i])>200 && i<n-1){printf("IMPOSSIBLE\n");break;}
			if(i==n-1) printf("POSSIBLE\n");
				}

	}return 0;
}
