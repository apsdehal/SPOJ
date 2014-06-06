#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
	unsigned long long int n,j=0;
	scanf("%lld",&n);
	while (n > 1){
	  if (n % 2 == 0)
	    {n=n/2;}
	  else {n=3*n+3;}
	j++;
	if(j>=pow(10,6)) break;}
	if((j>=pow(10,6))) {printf("NIE");}
	else printf("TAK");
	return 0;}

