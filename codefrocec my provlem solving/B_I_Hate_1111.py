t=int(input())
for _ in range(t):
    x=int(input())
    p=False
    for a in range(min(x//111,11)+1):
        r=x-111*a
        if r>=0 and r%11==0:
            p=True
            break
    print("YES" if p else "NO")