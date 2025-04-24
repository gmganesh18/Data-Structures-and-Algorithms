
def peakElement(list1,n):
    max_element=0
    max_index=0
    for i in range(0,n):
        if list1[i]>max_element:
            max_element=list1[i]
            max_index=i
    return max_index
list1=[1,2,4,5,2,1]
n=len(list1)

result=peakElement(list1,n)
print(result)