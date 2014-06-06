#include <iostream>
using namespace std;
int main(){int t,N,i;string s;scanf("%d",&t);while(t--){s='8';scanf("%d",&N);for(i=1;i<=((N-1)/4);i++){s+="9251";}if(((N-1)%4)== 1) s+='8';else if(((N-1)%4)== 2) s+="91";else if((N-1)%4==3) s+="924";cout<<s<<"\n";}}



