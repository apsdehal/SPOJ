#include <cstdio>
#include <map>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t,i,z,j,count;string s;map <char,int> M;unsigned long long int sum;
	scanf("%d",&t);
	for(j=1;j<=t;j++){count=0;sum=0;M.clear();
		cin>>s;
		int p[s.length()];z=1;
		for(i=0;i<s.length();i++){
			if(M.count(s[i])==0){
				M[s[i]]=z;
				if(z==1) z=0;
				else if(z==0) z=2;
				else z++;
				count++;
			}
			p[i]=M[s[i]];
		}
if(count==1) count=2;
		z=s.length();
		for(i=0;i<z;i++){
			sum=sum*count+p[i];
		}
		printf("Case #%d: %lld\n",j,sum);
	}
	return 0;
}
