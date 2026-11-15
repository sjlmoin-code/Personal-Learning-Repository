a=int(input())
b=int(input())
reserve=0
s=0
count=0
for i in range(a,b+1):
    s=i
    while s!=0:
        j=s%10
        reserve=j*j*j+reserve
        s=s//10
    if reserve==i:
        print(i)
        count+=1
    reserve=0  
print("个数:",count)
