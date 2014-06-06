#include <cstdio>
#include <cstring>
#include <string>
int main()
{
    int iters; /* number of test cases */
    int gen; /* generation */
    long long int kid; /* kid number */
    int dude; /* our answer */
    int tmp;
    
    scanf("%d", &iters);
    while (iters--)
    {
        scanf("%d %lld", &gen, &kid);
        
        long long int trace[gen];
        memset(trace, 0, sizeof(long long int)*gen);
        
        tmp = gen;
        while (tmp--) { trace[tmp] = kid; kid = (kid+1)/2; } /* send the trace back to Raj by going up the family tree */
        
        dude = 1;
        while (tmp++ < gen-1) /* 1st gen is a dude, now go down the family tree changing gender wherever necessary */
        {
            if (trace[tmp] == trace[tmp-1]*2) dude = !dude;
        }
        
        printf(dude ? "Male\n" : "Female\n"); /* if dude == 1, its really a dude, otherwise a dudette */
    }
    return 0;
}