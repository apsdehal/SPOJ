#include <iostream>
#include <cstdio>
using namespace std;
int gcf(int a, int b) {
	if(b == 0) {
		return a;
	} else {
		return gcf(b, a % b);
	}}

int main() {
	int p,q,k,t;
	scanf("%d",&t);
	while(t--) {
	scanf("%d %d", &p,&q);
	k=gcf(p,q);
	p=p/k;
	q=q/k;
	if(p<q){
	k=q-p;
	}
	else k=p-q;
	printf("%d\n",k);}
	return 0;
}


