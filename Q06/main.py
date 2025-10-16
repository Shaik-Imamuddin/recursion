def reverseNum(n, rev):
    if n == 0:
        return rev
    return reverseNum(n//10, rev*10 + n%10)

n = int(input())
print(reverseNum(n, 0))