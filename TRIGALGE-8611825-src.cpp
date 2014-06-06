#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
void ans(int A, int B, int C) {
	double x=C/A;


	for (int i=1;i<=100;i++) {
		x= x-(A*x+B*sin(x)-C)/(A+B*cos(x));
	}

	printf("%.6lf\n",x);
}
int main() {
	int a,b,c,t;
	scanf("%d",&t);
	while(t--){

	scanf("%d %d %d",&a,&b,&c);
	ans(a,b,c);}
	return 0;
}
