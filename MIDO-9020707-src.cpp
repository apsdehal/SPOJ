#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int n,i;
	int last=48*60,team1=0,team2=0,time=0,count1=0,count2=0;
	bool flag=1;
	scanf("%d",&n);
	int a[n][3];
	for(i=0;i<n;i++){
			scanf("%d %d:%d",&a[i][0],&a[i][1],&a[i][2]);
			if(a[i][0]==1) count1++;
			else count2++;
			if(abs((double)count2-(double)count1)==1 && flag==1){
				time=(a[i][1]*60+a[i][2]);
				flag=0;

				}
			if((count1-count2)==0 && a[i][0]==2 ){
				team1+=(a[i][1]*60+a[i][2]-time);
				time=0;flag=1;
			}
			else if((count1-count2)==0 && a[i][0]==1 ){
				team2+=(a[i][1]*60+a[i][2]-time);
				time=0;flag=1;
			}
	}
			if(count1>count2) team1+=(last-time);
			else if(count2>count1) team2+=(last-time);
			count1=team1/60;count2=team1%60;
			cout<<setfill('0')<<setw(2)<<count1<<":"<<setfill('0')<<setw(2)<<count2<<endl;
			count1=team2/60;count2=team2%60;

			cout<<setfill('0')<<setw(2)<<count1<<":"<<setfill('0')<<setw(2)<<count2<<endl;

}


