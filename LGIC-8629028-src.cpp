#include <cstdio>
#include <cmath>
using namespace std;

long long int fact(long long int N) {
	if(N<=1) return 1;
	else
	return N*fact(N-1);
}
int main() {
	long long int t;
	scanf("%lld",&t);
	t= fact(t)+pow(2,t)-t;
	printf("%lld",t);
	return 0;
}
