import sys
t=int(sys.stdin.readline())
while t:
    z=0
    n=int(sys.stdin.readline())
    if n==0 or n==1:
        print("0")
        continue
    sum=int(n)-1
    m=int(n**0.5)
    for k in range(2,m+1):
        z=int(n/k)-k
        sum+=(k*(z+1)+z*(2*(k+1)+(z-1))/2)
    print(sum)
    t=t-1
   