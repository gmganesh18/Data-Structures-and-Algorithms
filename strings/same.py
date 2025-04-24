str="ganesh"
n=len(str)
vowels="aeiou"
str_list=list(str)
left=0

right=n-1
while(left<right):
    if(str_list[left] in vowels and str_list[right] in vowels):
        str_list[left],str_list[right]=str_list[right],str_list[left]
        left+=1
        right-=1
    elif(str_list[left] in vowels and str_list[right] not in vowels):
        right-=1
    elif(str_list[left] not in vowels and str_list[right] in vowels):
        left+=1
    else:
        left+=1
        right-=1
str="".join(str_list)
print(str)

    