n=int(input())
if n<3:
    print('-1')
else:
    val=[]
    b=0
    arr=list(map(int,input().strip().split()))[:n]
    for j in range(n-2):
        for k in range(n-2-b):
            if arr[j]<arr[j+k+1] and arr[j+k+1]<arr[j+k+2]:
                v=arr[j+k]+(arr[j+k+1]*arr[j+k+2])
                val.append(v)
            b=b+1
    if len(val)==0:
        print('-1')
    else:
        print(max(val))