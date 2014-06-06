#include<cstdio>

 

int main()
{
  long long int T,N;
  scanf("%lld",&T);
  while(T--)
  {
     scanf("%lld",&N);
   
     printf("%lld\n", (N*N+2*N)*(2*N+1)/8);
  }
return 0;

}








