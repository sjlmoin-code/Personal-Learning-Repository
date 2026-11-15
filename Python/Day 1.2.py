n=int(input())
count=0
total=0
for i in range(1,n+1):
    if i%2==0:
        count+=1
        total+=i
print("偶数个数:",count)
print("偶数总和:",total)