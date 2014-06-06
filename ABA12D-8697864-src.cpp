#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
#define MOD 1000000007
#define MAX 100000
typedef unsigned long long ull;
 
int N,M;
 
#define MAX 1000000
bool isNPrime[10000000];
int Primes[3000000], nPrimes=0;
int knum[100], kn=0;
 
int seive()
{
isNPrime[0]=isNPrime[1]=true;
for(int i=0;i*i<4*MAX;i++)
if(isNPrime[i]==false)
for(int j=i*i;j<4*MAX;j=j+i)
isNPrime[j]=true;
for(int i=0;i<4*MAX;i++)
if(isNPrime[i]==false)
Primes[nPrimes++]=i;
}
 
int pow1(int x, int n){
if(n==0) return 1;
int r = pow1(x, n/2);
r=r*r;
if(n%2==1)
r=r*x;
return r;
}
 
int dev(int n){
int res=1;
if(isNPrime[n]==false)
return n+1;
for(int i=0;i<nPrimes && Primes[i]<=n;i++){
int cnt=0;
while(n%Primes[i]==0) {
n=n/Primes[i]; cnt++;
}
if(cnt){
res = res * (pow1(Primes[i], cnt+1) - 1) / (Primes[i]-1);
}
}	
return res;
}
 
int main(){
seive();
// cout << dev(50) << endl;
knum[kn++]=2;
for(int i=1;i*i<=MAX;i++){
int k = dev(i*i);
if(isNPrime[k]==false)
knum[kn++] = i*i;
}
int T, a, b;
cin >> T;
while(T--)
{
cin >> a >> b;
int ai,bi;
for(ai=0;ai<kn && knum[ai]<a;ai++);	
for(bi=kn-1;bi>=0 && knum[bi]>b;bi--);	
// cout << ai << ' ' << bi << endl;
cout << bi-ai+1 << endl;
}
return 0;
}
