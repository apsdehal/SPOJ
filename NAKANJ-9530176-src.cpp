#include <cstdio>
#include <queue>

using namespace std;
#define MAX 8
//#define 1INFINITY 99999;
bool check(int x,int y,bool visited[][9]){
	if(x<0 || x>=MAX) return false;
	if(y<0 || y>=MAX) return false;
	if(visited[x][y]==true) return false;
	return true;

}
struct pos{
	int x,y,cost;
};
int xx,yy;
int bfs(pos a,pos b){
	bool visited[9][9];
	int i,j;
	a.cost=0;
	queue < pos > q;
	for(i=0;i<=8;i++)
		for(j=0;j<=8;j++)
			visited[i][j]=false;
	q.push(a);
	while(!q.empty()){
		a=q.front();
		q.pop();
		xx=a.x;
		yy=a.y;
		visited[xx][yy]=true;

		if(xx==b.x && yy==b.y ) return a.cost;
		if(check(xx+2,yy-1,visited)){
			q.push((pos){xx+2,yy-1,a.cost+1});
			}
		if(check(xx+2,yy+1,visited)){
					q.push((pos){xx+2,yy+1,a.cost+1});
					}
		if(check(xx+2,yy-1,visited)){
					q.push((pos){xx+2,yy-1,a.cost+1});
					}
		if(check(xx-2,yy-1,visited)){
					q.push((pos){xx-2,yy-1,a.cost+1});
					}
		if(check(xx-2,yy+1,visited)){
					q.push((pos){xx-2,yy+1,a.cost+1});
					}
		if(check(xx+1,yy+2,visited)){
					q.push((pos){xx+1,yy+2,a.cost+1});
					}
		if(check(xx+1,yy-2,visited)){
					q.push((pos){xx+1,yy-2,a.cost+1});
					}
		if(check(xx-1,yy-2,visited)){
					q.push((pos){xx-1,yy-2,a.cost+1});
					}
		if(check(xx-1,yy+2,visited)){
					q.push((pos){xx-1,yy+2,a.cost+1});
					}
		}
		return -1;
	}


int main(){
	int t;
	char s1[3],s2[3];
	scanf("%d",&t);
	while(t--){
		scanf("%s %s",s1,s2);
		//acout<<s1[0]-'a'<<" "<<s1[1]-'1'<<" "<<s2[0]-'a'<<" "<<s2[1]-'1';
		printf("%d\n",bfs((pos){s1[0]-'a',s1[1]-'1'},(pos){s2[0]-'a',s2[1]-'1'}));

	}
	return 0;
}
