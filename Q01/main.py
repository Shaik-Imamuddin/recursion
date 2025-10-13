def printNumbers(n):
    if n==0:
        return
    printNumbers(n-1)
    print(n,end=" ")

n = int(input())
printNumbers(n)