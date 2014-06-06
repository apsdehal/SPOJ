#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
void manku(long long int n ) {
	string s;long long int i=0;
	while(n>0){;
		switch(n%2){
						case 1: s[i] = '5';
						break;

						case 0: s[i]='6';
						break;



	}if(n%2==0) n-=1;
		n=n/2;
		i++;
	}for(long long j=i-1;j>=0;j--){
		printf("%c",(char)s[j]);
	}

	printf("\n");
}
int main() {
	int t;long long int n;
	scanf("%d",&t);
	while(t--) {
		scanf("%lld", &n);
		manku(n);
	}
	return 0;
}
