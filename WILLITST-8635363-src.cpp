#include <cstdio>


int main() {
	unsigned long long int n,j=0;
	scanf("%lld",&n);
	while (n > 1){
	  if (n % 2 == 0)
	    {n=n/2;}
	  else {n=3*n+3;}
	j++;
	if(j>=(1000)){printf("NIE");return 0;}}
	
       printf("TAK");
	return 0;}





