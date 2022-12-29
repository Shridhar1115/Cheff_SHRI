# cook your dish here
i = int(input())
for _ in range(i):
    a = input()
    b=0
    for t in range(len(a)):
        if a[t]!=a[t-1]:
            b+=1 
    if b>2:
        print("non-uniform")
    else :
        print("uniform")