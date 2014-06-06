/*
 * BEENUM.cpp
 *
 *  Created on: Feb 5, 2013
 *      Author: apsdehal
 */
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
	long long int k,m;
	long double z;
	scanf("%lld",&k);
	while(k!=-1) {

		z=((sqrt(12*k-3)-3)/6);
		m=(long long int)z;
		if((z-m)==0) printf("Y\n");
		else printf("N\n");
		scanf("%lld",&k);
	}
	return 0;
}



