#include <cstdio>
using namespace std;
int min(int x, int y, int z) {
	return (x<((y<z)?y:z))?x:((y<z)?y:z);

}
#define height 111
#define width 111
int a[height][width];
int main(){
	int m,n,i,j,key;
	//printf("%d",c[0]);
		scanf("%d %d",&m,&n);

		for(i=0;i<m;i++){
			for(j=1;j<=n;j++)
				scanf("%d",&a[i][j]);
			a[i][0]=9999;a[i][j]=9999;}
		for(i=1;i<m;i++){
		for(j=1;j<=n;j++)
			a[i][j]+=min(a[i-1][j-1],a[i-1][j],a[i-1][j+1]);
		}
		key= a[m-1][1];
		for(i=1;i<=n;i++)
			if(a[m-1][i]<key) key =a[m-1][i];
		printf("%d\n",key);

	return 0;
}
