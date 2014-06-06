#include <iostream>
#include <cstdio>

using namespace std;
int main () {
	int a[1000000];
	long int n,l;
	int f=0,t;
	scanf("%d",&t);
	while(t--){f=0;
	scanf("%ld", &n);
	for(int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++) {l=0;
		for(int i=0; i<n;i++){
			if(a[i]== a[j]){l++;
		}}
			if(l>(n/2))
			{cout<<"YES "<<a[j]<<endl;f=1;
			break;
			}
	} if(f==0) printf("NO\n");
}
return 0;
}
