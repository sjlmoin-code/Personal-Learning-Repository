a=int(input())
b=int(input())
c=int(input())
if a+b>c and a+c>b and b+c>a:
    if a==b and b==c:
        print("等边三角形")
    elif a==b or b==c or a==c:
        print("等腰三角形")
    elif a!=b and b!=c and a!=c:
        print("普通三角形")
else:
    print("无法构成三角形")