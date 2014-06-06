#include <cstdio>

int main()
{
int t; long long k;
scanf("%d", &t);
while(t--)
{
scanf("%lld", &k);
printf("%lld\n", 250*(k-1) + 192);
}
return 0;
}