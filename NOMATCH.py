# cook your dish here
n=int(input())
for i in range(n):
    len=int(input())
    l=list(map(int,input().split()))[:len]
    s=0
    l.sort()
    for i in range(len//2):
        s+=abs(l[i]-l[len-i-1])
    print(s)