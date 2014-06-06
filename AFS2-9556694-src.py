import math
t=int(raw_input())
while t:
    z=0
    n=int(raw_input())
    if n==0 or n==1:
        print("0")
        continue
    sum=int(n)-1
    m=int(math.sqrt(float(n)))
    for k in range(2,m+1):
        z=int(n/k)-k
        sum+=(int)(k*(z+1)+z*(2*(k+1)+(z-1))/2)
    print(sum)
    t=t-1
   
