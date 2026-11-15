text=input()
a=b=c=d=0
for ch in text:
    if ch.isalpha():
        a+=1
    elif ch.isdigit():
        b+=1
    elif ch.isspace():
        c+=1
    else:
        d+=1

print("字母个数：",a)
print("数字个数：",b)
print("空格个数：",c)
print("其他字符个数：",d)