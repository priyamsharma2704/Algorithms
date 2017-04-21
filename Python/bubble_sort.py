arr = [4,2,6,5,12,53,76,1,8];

def bubble_sort(arr):
    for i in range(0,len(arr)-2):
        for j in range(0,len(arr)-1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j];
    
bubble_sort(arr);

for i in range(len(arr)):
    print arr[i];
        

