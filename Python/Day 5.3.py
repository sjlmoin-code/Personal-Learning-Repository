numbers=list(map(int,input().split()))
for i in range(len(numbers)-1):
    for j in range(len(numbers)-1-i):
        if numbers[j]>numbers[j+1]:
            numbers[j],numbers[j+1]=numbers[j+1],numbers[j]
print("排序结果:",end=" ")
for p in numbers:
    print(p,end=" ")