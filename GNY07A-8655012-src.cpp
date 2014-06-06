#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    string s;
	int n,k,z=1;
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&k);
		cin>>s;
		s = s.erase(k-1,1);
		printf("%d ",z);
		cout <<s<<endl;
		z++;
	}return 0;
}
