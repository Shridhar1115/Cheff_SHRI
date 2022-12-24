# cook your dish here
for i in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    flag=1
    for i in range(n-1):
        if a[i]>a[i+1]:
            if a[i]+a[i+1]<=x:
                a[i],a[i+1]=a[i+1],a[i]
            else:
                flag=0
                break
    if flag:
        print("YES")
    else:
        print("NO")