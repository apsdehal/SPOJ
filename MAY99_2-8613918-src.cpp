#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
void manku(long long int n ) {
    string s;long long int i=0;
	while(n>0){;
		switch(n%5){
						case 1: s[i] = 'm';
						break;
						case 2: s[i]= 'a';
						break;
						case 3: s[i]='n';
						break;
						case 4: s[i]='k';
						break;
						case 0: s[i]='u';
						break;



	}if(n%5==0) n-=1;
		n=n/5;
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
