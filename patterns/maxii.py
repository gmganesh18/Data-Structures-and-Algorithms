arr=[1,1,2,1,1,1,1]
n=len(arr)
max_ones=0
for i in arr:
    if(arr[i]==1):
        max_ones=max_ones+1
    elif(arr[i]!=1):
        max_ones=0
print(max_ones)