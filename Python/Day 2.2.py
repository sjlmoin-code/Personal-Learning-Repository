n=int(input())
count=0
total=0
while n!=0:
    total=total+n%10
    count+=1
    n=n//10
print("位数:",count)
print("数位之和:",total)