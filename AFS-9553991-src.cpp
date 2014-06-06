#include <cstdio>
#include <cmath>
#define ll long long
int main(){
int t;
ll sum, k,n,z,m;
scanf("%d",&t);
while(t--){z=0;scanf("%lld",&n);
if(n==0||n==1){printf("0\n"); continue;
} 
sum=n-1;m=(sqrt(n));
for(k=2;k<=m;k++){z=n/k-k;sum+=(k*(z+1)+z*(2*(k+1)+(z-1))/2);
}
printf("%lld\n",sum);

}
}