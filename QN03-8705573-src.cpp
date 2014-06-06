#include <iostream>
using namespace std;
int main(){
	int t,i,count;
	bool flag =0;
	string s;
	scanf("%d",&t);
	while(t-- && cin>>s){flag =0;count =0;

		for(i=0;i<s.length();i++){
			if(s[i]=='1' && !flag){count++;flag=1;}
			if(s[i]=='0' && flag){count++;flag=0;}

	}
		printf("%d\n",count);
}return 0;}
