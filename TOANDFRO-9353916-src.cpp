#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int k,l,i,j,count=0;
	string s;
	bool flag;
	scanf("%d",&k);
	while(k!=0){count=0;flag=0;
		cin>>s;
		l=s.length()/k;
		char a[l][k];
		for(i=0;i<l;i++){if(i%2==0) flag=0;else flag=1;
			for(j=0;j<k;j++){
				if(flag==0){
					a[i][j]=s[count];
				}
				else{
					a[i][k-j-1]=s[count];
				}count++;
			}
		}
		for(i=0;i<k;i++)
			for(j=0;j<l;j++)
				printf("%c",a[j][i]);
		printf("\n");scanf("%d",&k);

	}return 0;
}
