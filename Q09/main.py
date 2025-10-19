def palindromeCheck(str,start,end):
    if start>=end:
        return True
    if str[start]!=str[end]:
        return False
    return palindromeCheck(str,start+1,end-1)

str=input()
if palindromeCheck(str,0,len(str)-1):
    print("Palindrome")
else:
    print("Not Palindrome")