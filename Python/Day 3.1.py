numbers = list(map(int, input().split()))
a=b=c=s=0
for i in range(len(numbers)):
    if numbers[i]>0:
       a+=1
       s+=numbers[i]
    elif numbers[i]<0:
       b+=1
    elif numbers[i]==0:
         c+=1
         s+=numbers[i]
print("正整数个数:",a)
print("负整数个数:",b)
print("零的个数:",c)
print("正整数总和:",s)