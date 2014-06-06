#include <cstdio>
#include <utility>
using namespace std;
#define ll long long
pair<int, pair<int, int> > extendedEuclid(int a, int b) {
    if(a == 0) return make_pair(b, make_pair(0, 1));
    pair<int, pair<int, int> > p;
    p = extendedEuclid(b % a, a);
    return make_pair(p.first, make_pair(p.second.second - p.second.first*(b/a), p.second.first));
}
 
int modInverse(int a, int m) {
    return (extendedEuclid(a,m).second.first + m) % m;
}
ll comb(ll n, ll k) {
// return C(n,k) mod p, assuming p is prime
ll p =10000007;
ll numerator = 1; // n*(n-1)* … * (n-k+1)
int i;
for(i=0;i<k;i++) numerator = (numerator*(n-i))%p;

ll denominator = 1; // k!
for(i=1;i<=k;i++) denominator = (denominator*i) %p;

ll res = modInverse(denominator,p);
res = (res*numerator)%p;
return res;
}
int main(){
	int m,n;

		scanf("%d %d",&m,&n);
if(m<n) printf("-1\n");
else	if(m==n || n==1) printf("1\n");
else
		printf("%lld\n",comb(m-1,n-1));

	return 0;
}
