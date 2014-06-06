#include <cstdio>
int a[60],length,i,temp,j,sum;
void fact(int n){a[0]=1;length=1,sum=0;
	for(i=1;i<60;i++)
		a[i]=0;
	for(i=2;i<=n;i++)
{
j=temp=0;
while(j<length)
{
sum=temp+a[j]*i;
a[j]=sum%1000;
j++;
temp=sum/1000;
}
while(temp>0)
{
a[j++]=temp%1000;
temp/=1000;
length++;
}
}
}
int main(){
	int t;
	scanf("%d",&t);
	int n;
	while(t--){
	scanf("%d",&n);
	fact(n);
	printf("%d",a[length-1]);
		for(i=length-2;i>=0;i--)
		{
			if(a[i]>=100) printf("%d",a[i]);
			else if(a[i]>=10 && a[i]<100)
		printf("0%d",a[i]);
		else
		printf("00%d",a[i]);

	}
	printf("\n");}
	return 0;
}
