#include <cstdio>
#include <cstdlib>
using namespace std;



int main() {
    int t,c,d,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&c);
		int a[c];
		for(i=0;i<c;i++) {
			scanf("%d",&a[i]);}
		scanf("%d",&d);
		int b[d];
		for(i=0;i<d;i++) {
				scanf("%d",&b[i]);
		}
		
		
		int j;
		int low=abs(a[0]-b[0]);

		for(i=0;i<c;i++) {
			for(j=0;j<d;j++) {
				if(abs(a[i]-b[j])<low) {
					low = abs(a[i]-b[j]);
				}
			}
		}
		printf("%d\n",low);
	}
	return 0;
}



