#include <string>
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
long long returnInt(string s){int n=s.length();long long sum=0;
	for(int i=0;i<n;i++){
		sum+=(s[n-i-1]-'0')*pow(10,i);
	}
	return sum;
}
int main(){
	int t,a,b,c;char x;
	cin>>t;string s1,s2,s3,s4,s5,s6;a=0;b=0;c=0;
	while(t--){
		
		cin>>s1>>s4>>s2>>s5>>s3;
//cout<<"s1="<<s1<<endl<<"s2="<<s2<<endl<<"s3="<<s3<<endl<<"s4="<<s4<<endl<<"s5="<<s5<<endl;

		if(s1.find('machula')!=-1){
			c=returnInt(s3);
			b=returnInt(s2);
			a=c-b;
		}
		else if(s2.find('machula')!=-1){
			c=returnInt(s3);
			a=returnInt(s1);
			b=c-a;
		} else {
			b=returnInt(s2);
						a=returnInt(s1);
						c=a+b;
		}
		cout<<a<<" + "<<b<<" = "<<c<<endl;
	}return 0;
}
