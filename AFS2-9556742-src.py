t=int(raw_input())
while t:
    z=int(0)
    n=int(raw_input())
    if n==0 or n==1:
        print("0")
        continue
    sum=int(n)-1
    m=int(n**0.5)
    k=2

    while k<=m:
        z=(n/k)-k
        sum+=(k*(z+1)+z*(2*(k+1)+(z-1))/2)
        k=k+1
    print(sum)
    t=t-1
