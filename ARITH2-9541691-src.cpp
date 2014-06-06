#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	long long int t,a,sum; string c="-1";
	scanf("%lld", &t);
	while(t--){sum=0;
		scanf("%lld",&a);
		sum+=a;
		while(1){
			cin>>c;
			if(c=="=") break;
			scanf("%lld",&a);
			if(c=="+")
				sum+=a;
			else if(c=="-")
				sum-=a;
			else if(c=="*")
				sum*=a;
			else if(c=="/")
				sum/=a;
		}
		printf("%lld\n",sum);
		
	}return 0;
}