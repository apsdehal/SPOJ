#include <cstdio>

#include <cmath>

int function(long long int);

int main(){        

int x,y,z;        

char str[6];        

scanf("%s",str);        

x=str[0]-'0';        

y=str[1]-'0';        

z=str[3]-'0';        

//printf("%d %d %d",x,y,z);        

long long int temp,value,value1,value2,k,ans;        
        while(x!=0||y!=0||z!=0)
       

 {
                

temp=pow(10,z);
                

value=(x*10+y)*temp;
                

value1=function(value);
                

value2=value-value1;
                

ans=value2*2+1;
                

printf("%lld\n",ans);
                
                scanf("%s",str);
                

x=str[0]-'0';
                

y=str[1]-'0';
                

z=str[3]-'0';
          

  }
        

return 0;
}

       

int function( long long int x)    

{    

long long int y,p,h=1;    

p=pow(2,h);    

while(p<=x)    

{   

 h=h+1;    

p=pow(2,h);    

}    

y=pow(2,h-1);        

return y;    

} 