n=int(input())
a=n
reverse=0
while n!=0:
    reverse=reverse*10+n%10
    n=n//10
if reverse==a:
    print("是回文数")
else:
    print("不是回文数")