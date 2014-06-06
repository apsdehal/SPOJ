#include <cstdio>
#include <queue>
#include <iostream>
#include <string>
using namespace std;
#define MAX 8
#define INFINITY 1000000
struct pos{
	int a;
	int b;
};
int xx,yy;

bool check(int x,int y,bool visited [][9],int cost[][9] ){
	//if(visited[x][y]==true) return false;
	if(x<0 || x >= MAX) return false;
	if(y<0 || y >= MAX) return false;
	if((cost[xx][yy])+x*xx+y*yy >=cost[x][y] ) return false;
	//if(x>xx)if((cost[xx][yy]+x*xx+y*yy>=cost[x][y])) return false;
	return true;
}
int bfs(int a, int b,int c,int d){
	bool visited [9][9];
	int cost [9][9],i,j;
	queue< pos > q;
	q.push((pos){a,b});
	for(i=0;i<=8;i++)
		for(j=0;j<=8;j++){
			cost[i][j]=INFINITY;
			visited[i][j]=false;
		}
	cost[a][b]=0;
	while(!q.empty()){
		pos p =q.front();
		q.pop();
		xx=p.a;
		yy=p.b;
		//cout<<"xx="<<xx<<" "<<"yy="<<yy<<endl;

		//if(!visited[xx][yy]){
		visited[xx][yy]=true;
		if ( check( xx - 1, yy + 2, visited, cost ) ) {
	q.push( ( pos ) { xx - 1, yy + 2 } );
	cost[ xx - 1 ][ yy + 2 ] = cost[ xx ][ yy ] + xx * ( xx - 1 ) + yy * ( yy + 2 );
	}
	if ( check( xx + 1, yy + 2, visited, cost ) ) {
	q.push( ( pos ) { xx + 1, yy + 2 } );
	cost[ xx + 1 ][ yy + 2 ] = cost[ xx ][ yy ] + xx * ( xx + 1 ) + yy * ( yy + 2 );
	}
	if ( check( xx - 1, yy - 2, visited, cost ) ) {
	q.push( ( pos ) { xx - 1, yy - 2 } );
	cost[ xx - 1 ][ yy - 2 ] = cost[ xx ][ yy ] + xx * ( xx - 1 ) + yy * ( yy - 2 );
	}
	if ( check( xx + 1, yy - 2, visited, cost ) ) {
	q.push( ( pos ) { xx + 1, yy - 2 } );
	cost[ xx + 1 ][ yy - 2 ] = cost[ xx ][ yy ] + xx * ( xx + 1 ) + yy * ( yy - 2 );
	}
	if ( check( xx - 2, yy + 1, visited, cost ) ) {
	q.push( ( pos ) { xx - 2, yy + 1 } );
	cost[ xx - 2 ][ yy + 1 ] = cost[ xx ][ yy ] + xx * ( xx - 2 ) + yy * ( yy + 1 );
	}
	if ( check( xx + 2, yy + 1, visited, cost ) ) {
	q.push( ( pos ) { xx + 2, yy + 1 } );
	cost[ xx + 2 ][ yy + 1 ] = cost[ xx ][ yy ] + xx * ( xx + 2 ) + yy * ( yy + 1 );
	}
	if ( check( xx - 2, yy - 1, visited, cost ) ) {
	q.push( ( pos ) { xx - 2, yy - 1 } );
	cost[ xx - 2 ][ yy - 1 ] = cost[ xx ][ yy ] + xx * ( xx - 2 ) + yy * ( yy - 1 );
	}
	if ( check( xx + 2, yy - 1, visited, cost ) ) {
	q.push( ( pos ) { xx + 2, yy - 1 } );
	cost[ xx + 2 ][ yy - 1 ] = cost[ xx ][ yy ] + xx * ( xx + 2 ) + yy * ( yy - 1 );
	}
	//cout<<cost[c][d]<<" ";

	}	if(!visited[c][d]) return -1;
	return cost[c][d];
}
int main(){
	int t,a,b,c,d;
	//char input_first[2],input_second[2];
	//scanf("%d",&t);
//	string input_first,input_second;
//	cin>>t;

		while(scanf("%d",&a) != EOF ){
			scanf("%d %d %d",&b,&c,&d);
		//cout<<a<<" "<<b<<" "<<" "<<c<<" "<<d<<endl;
		printf("%d\n",bfs(a,b,c,d));
	}
	return 0;
}

