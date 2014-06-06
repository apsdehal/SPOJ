#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int t,k,i,j; double sumx,sumy,sumz,sumvx,sumvy,sumvz,x,y,z,vx,vy,vz, mint,mind;bool intial;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		sumx=0;sumy=0;sumz=0;sumvx=0;sumvy=0;sumvz=0;mint=0;mind=0;intial =0;
		scanf("%d",&k);
		for(j=0;j<k;j++){
			scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&z,&vx,&vy,&vz);
			sumx+=x;
			sumy+=y;
			sumz+=z;
			sumvx+=vx;
			sumvy+=vy;
			sumvz+=vz;
		}
        if((sumvx*sumvx+sumvy*sumvy+sumvz*sumvz)/k<1e-09) intial =1;
        else
		mint=-(sumx*sumvx+sumy*sumvy+sumz*sumvz)/(sumvx*sumvx+sumvy*sumvy+sumvz*sumvz);
		if(mint<0 || intial) mint=0;
		mind=sqrt(((sumx+sumvx*mint)*(sumx+sumvx*mint)+(sumy+sumvy*mint)*(sumy+sumvy*mint)+(sumz+sumvz*mint)*(sumz+sumvz*mint)))/k;
		printf("Case #%d: %.8lf %.8lf\n",i,mind,mint);
	}return 0;
}
