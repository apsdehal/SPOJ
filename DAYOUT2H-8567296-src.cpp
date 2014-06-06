#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,n,t=1;
	cin >> n;
	while(n--) {
	cin>> a>>b;
	int k;
	int p=0;
	if(a==1 || a==2 ) {p=2;}

		if(a==3) {p=1;
		}
	for(int i=a; i<=b;i++) {
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0) {
				k=0;
				break;
			} else {k=1;} }
		if(a==2) {i+=1;}
			if (k==1) {p++;}

		}
	cout << "Case "<<t<<": "<<p<<endl;
	t++;
	}
	return 0;
}

