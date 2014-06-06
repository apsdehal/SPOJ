#include <iostream>
#include <cstdio>

int main() {
	float a=1,b=1,c=1;

	while(1){scanf("%f %f %f",&a , &b, &c);
	if(a==0 && b==0 && c==0){break;}

	if((b/a)==(c/b)){int k=(c*(c/b));
		printf("GP %d\n", k);
	}
	if((b-a)==(c-b)) {int k=(c+(c-b));
		printf("AP %d\n", k );

	}}
	return 0;
}
