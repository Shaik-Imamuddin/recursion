def sumofDigits(n):
    if n==0:
        return 0
    return (n%10)+sumofDigits(n//10)
n = int(input())
print(sumofDigits(n))