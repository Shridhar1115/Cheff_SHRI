def get_ints():
    return map(int, input().strip().split())
while True:
    try:
        n,k = get_ints()
    except EOFError:
        break
    x = ['a','b','c']
    for i in range(3,36):
        x.append(x[i-1] + x[i-2] + x[i-3])
    if(len(x[n]) < k):
        print('-1')
    else:
        print(x[n][k-1])
    exit()