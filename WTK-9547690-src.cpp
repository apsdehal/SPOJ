#include <cstdio>

using namespace std;
int main(){
    int t,n,ans,i;
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%d",&n);
        
        ans = 0;
        
        for(i=2;i<=n;i++)
            ans=(ans+n+1-i)%i;
        
        printf("%d\n",ans+1);
    }
    
    return 0;
}