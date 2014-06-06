def main():
    n=int(input())
    while n != -1:
        a= []
        sum=0
        count=0
        for i in range(0,n):
            a.append(int(input()))
            sum+=a[i]
        if sum%n !=0:
            print("-1")
        else:
            sum=sum/n
            a.sort()
            for i in range(0,n):
                if a[i]>sum:
                    break
                else:
                    count+=(sum-a[i])
            print(int(count))
        n=int(input())            
                            
if __name__ == "__main__": main()
