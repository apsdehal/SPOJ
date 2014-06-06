#include <iostream>
#include <cstring>
#include <algorithm>
 
using namespace std;
typedef unsigned long long ull;
ull mod = 1000000007;
class _matrix{
public:
ull x[2][2];
int n,m;
_matrix() {
memset(x, 0, sizeof(x));
n=m=2;
}
void print(){
for(int i=0;i<2;i++){
for(int j=0;j<2;j++)
cout << x[i][j] << ' ';
cout << endl;
}
}
};
int N;
 
class _matrix mul(class _matrix a, class _matrix b)
{
class _matrix r;
for(int i=0;i<a.n;i++)
for(int j=0;j<a.m;j++)
{
ull res=0;
for(int k=0;k<b.n;k++)
res += 1LL*a.x[i][k]*b.x[k][j];
r.x[i][j] = res % mod;
}
return r;	
}
 
class _matrix pow(class _matrix a, ull n)
{
if(n==1)
return a;
class _matrix x = pow(a,n/2);
class _matrix r = mul(x,x);
if(n%2==1)
r=mul(r,a);
return r;	
}
/*
fn(n)=fn(n)
fn(n+1)=fn(n) + fn(n-1)
1 1
1 0
1 1 a
1 0 b
1 1 a+b=c
1 0 a
1 1 c+a
1 0 c
*/
int main()
{
class _matrix a;
a.x[0][0]=1;
a.x[0][1]=1;
a.x[1][0]=1;
ull tc, N;
cin >> tc;
while(tc--){
cin >> N>>mod;
class _matrix r1=pow(a,N+3);
//r.print();
//r1.print();
// FIB SEQ 1 1 2 3 5 8 13 21
// SUM OF FIRST N FIBO F(N+2)-1
// CURRENT SEQ 2 3 5 8 13 21
// SUM OF FIRST N CURR SEQ F(N+3)-3
ull res=r1.x[0][0];
if(res<3){
if(mod<10)
res=res+mod*10-3;
else
res=res+mod-3;
res=res%mod;
}else
res=res-3;
cout << res << endl;
}
return 0;
}