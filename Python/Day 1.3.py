a=int(input())
b=int(input())
count=0
total=0
maximum=0
for i in range(a,b+1):
    if i%3==0:
        if i%5!=0:
            count+=1
            total+=i
            if i>maximum:
                maximum=i
print("个数:",count)
print("总和:",total)
if count==0:
    print("最大值:不存在")
else:
    print("最大值:",maximum)