def removeChar(str,ch,index):
    if index==len(str):
        return ""
    if str[index]==ch:
        return removeChar(str,ch,index+1)
    else:
        return str[index]+removeChar(str,ch,index+1)

str=input()
ch=input()
print(removeChar(str,ch,0))