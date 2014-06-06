#include <iostream>
#include <cstring>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
 
char str[]="ALLIZZWELL";
int v[105][105];
 
int n,m;
 
vector<string> inp;
int fn(int r, int c, int l)
{
 	if(l==10)
		return true;
	v[r][c]=1;
	for(int i=-1;i<=1;i++)
		for(int j=-1;j<=1;j++)
		{
			int r1=r+i, c1=c+j;
			if((i==0&&j==0)||r1<0||r1>=n||c1<0||c1>=m||inp[r1][c1]!=str[l]) 
				continue;
			if(v[r1][c1])
				continue;
			if( fn(r1,c1,l+1) ){
				v[r][c]=0;
				return true;
			}
		}
	v[r][c]=0;
	return false;
}
 
int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		inp.clear();
		cin>>n>>m;
		for(int i=0;i<n;i++ ){
			string a;
			cin>>a;
			inp.push_back(a);
		}
		bool f=false;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(inp[i][j]=='A' && fn(i,j,1)){
					f=true; break;
				}
		if(f)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
					
	}
}