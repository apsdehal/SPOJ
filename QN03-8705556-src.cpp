#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	int t,i,count,z;
	bool flag =0;
	string s;
	scanf("%d",&t);
	while(t--){flag =0;count =0;
		cin>>s;
		z=(int)s.length();
		for(i=0;i<z;i++){
			if(s[i]=='1' && flag==0){count++;flag=1;}
			else if(s[i]=='0' && flag==1){count++;flag=0;}

	}
		printf("%d\n",count);
}return 0;}
