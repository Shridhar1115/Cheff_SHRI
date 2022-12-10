# cook your dish here
for _ in range(int(input())):
    n=int(input())
    print(int(n/4)) if (n%4==0) else print(int((n/4)+1))