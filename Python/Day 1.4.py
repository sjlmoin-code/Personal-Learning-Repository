a=int(input())
is_prime=True
if a>=3:
    for i in range(2,a):
        if a%i==0:
            is_prime=False
            break
if is_prime and a>=3:
    print("是质数")
elif a==2:
    print("是质数")
else:
    print("不是质数")