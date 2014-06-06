#include <cstdio>
using namespace std;
int max(int a,int b,int c){
	return (a>b?(a>c?a:c):(b>c?b:c));
}
#define height 111
#define width 111
int a[height][width]={0};
int main(){
	int t,m,n,i,j,key;
	scanf("%d",&t);
	while(t--){//printf("%d",c[0]);
		scanf("%d %d",&m,&n);

		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++)
				scanf("%d",&a[i][j]);
			a[i][j]=0;
		for(j=1;j<=n;j++)
			a[i][j]+=max(a[i-1][j-1],a[i-1][j],a[i-1][j+1]);
		}
		key= a[m][1];
		for(i=1;i<=n;i++)
			if(a[m][i]>key) key =a[m][i];
		printf("%d\n",key);

	}return 0;
}
