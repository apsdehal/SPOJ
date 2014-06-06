def main():
    n=int(input())
    while n>0:
        z=input()
        k=int(input())
        a= []
        sum=0
        for i in range(0,k):
            a.append(int(input()))
            sum+=a[i]
        if sum%k==0:
                print("YES")
        else:
                print("NO")    
        n=n-1            
                            
if __name__ == "__main__": main()


