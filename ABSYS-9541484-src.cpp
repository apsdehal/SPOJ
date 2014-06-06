#include <string>
#include <iostream>
using namespace std;
int returnInt(string s){int n=s.length();int sum=0;
	for(int i=0;i<n;i++){
		sum=sum*10+(s[i]-'0');
	}
	return sum;
}
int main(){
	int t,a,b,c;
	cin>>t;string s1,s2,s3,s4,s5,s6;
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
