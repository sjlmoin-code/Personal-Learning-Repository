numbers=list(map(int,input().split()))
target=int(input())
position=[]
count=0
for i in range(len(numbers)):
    if numbers[i]==target:
          count+=1
          position.append(i)
print("出现次数：",count)
if count==0:
     print("没有找到")
else:
    print("位置:",end=" ")
    for p in position:
        print(p,end=" ")