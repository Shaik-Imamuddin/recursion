def sortCheck(arr,n):
    if n==0 or n==1:
        return True
    if arr[n-1]<arr[n-2]:
        return False
    return sortCheck(arr,n-1)

n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))
if sortCheck(arr,n):
    print("Sorted")
else:
    print("Unsorted")
