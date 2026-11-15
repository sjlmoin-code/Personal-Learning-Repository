def analyze(numbers):
    maximum = numbers[0]
    minimum = numbers[0]
    positive_count = 0
    total=0
    average=0
    count=0
    for i in numbers:
        if maximum<i:
            maximum=i
        if minimum>i:
            minimum=i
        if i>0:
            positive_count+=1
        total+=i
        count+=1
    if count > 0:
        average = total / count
    return maximum,minimum,positive_count,average

numbers=list(map(int,input().split()))
a,b,c,s=analyze(numbers)
print("最大值：",a)
print("最小值：",b)
print("正整数个数：",c)
print("平均值：",s)