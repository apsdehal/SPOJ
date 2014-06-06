#include <iostream>
using namespace std;
int main(){
	int t,N,i;
	string s;
	scanf("%d",&t);
	while(t-- && scanf("%d",&N)){
		s='8';
		for(i=1;i<=((N-1)/4);i++){
			s+="9251";
		}
			if(((N-1)%4)== 1) s+='8';
			else if(((N-1)%4)== 2) s+="91";
			else if((N-1)%4==3) s+="924";

		printf("%s\n",s.c_str());}
	return 0;
	}




