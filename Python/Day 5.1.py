numbers=list(map(int,input().split()))
target=int(input())
position=-1
for i in range(len(numbers)):
    if numbers[i]==target:
          position=i
          print("找到目标，位置:",i)
          break
    else:
         continue
if position==-1:
     print("没有找到")    
    