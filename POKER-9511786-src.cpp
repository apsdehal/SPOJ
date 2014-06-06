#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string s="";
for(int i=0;i<5;i++)
{
string temp;
cin>>temp;
s+=temp;
}
int ca[13];
int co[4];
for(int i=0;i<13;ca[i]=0,i++);
for(int i=0;i<4;co[i]=0,i++);
for(int i=0;i<s.length();i++)
{
if(s[i]=='A')
ca[0]++;
else if(s[i]=='K')
ca[12]++;
else if(s[i]=='Q')
ca[11]++;
else if(s[i]=='J')
ca[10]++;
else if(s[i]=='T')
ca[9]++;
else if(s[i]<='9'&&s[i]>='0')
ca[s[i]-'0'-1]++;
else if(s[i]=='H')
co[0]++;
else if(s[i]=='C')
co[1]++;
else if(s[i]=='D')
co[2]++;
else if(s[i]=='S')
co[3]++;
}
int msq=0,sq=0;
bool flag=true;
int i,ii=0;
for(i=0;;i=(i+1)%13)
{
if(ca[i]>=1)
{
sq++;
}
else
{
if(sq>=msq)
{
ii=i-1;
msq=sq;
}
sq=0;
}
if(i==0&&!flag)
break;
flag=false;
}
if(sq>=msq)
{
ii=i;
msq=sq;
}
sort(ca,ca+13);
sort(co,co+4);
if(msq==5&&co[3]==5&&ii==0)
{
cout<<"royal flush"<<endl;
continue;
}
if(msq==5&&co[3]==5)
{
cout<<"straight flush"<<endl;
continue;
}
if(ca[12]==4)
{
cout<<"four of a kind"<<endl;
continue;
}
if(ca[12]==3&&ca[11]==2)
{
cout<<"full house"<<endl;
continue;
}
if(co[3]==5)
{cout<<"flush"<<endl;
continue;
}
if(msq==5)
{cout<<"straight"<<endl;
continue;
}
if(ca[12]==3)
{cout<<"three of a kind"<<endl;
continue;
}
if(ca[12]==2&&ca[11]==2)
{cout<<"two pairs"<<endl;
continue;
}
if(ca[12]==2)
{cout<<"pair"<<endl;
continue;
}
if(ca[12]==1)
cout<<"high card"<<endl;
}
return 0;

}