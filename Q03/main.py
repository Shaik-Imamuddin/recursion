def countDigits(n):
    if n==0:
        return 0
    return 1+countDigits(n//10)

n=int(input())
if n==0:
    print(1)
else:
    print(countDigits(n))