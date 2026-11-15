def analyze(numbers):
    count=0
    total=0
    maximum=numbers[0]
    minimum=numbers[0]
    for i in range(len(numbers)):
        total+=numbers[i]
        if maximum<numbers[i]:
            maximum=numbers[i]
        if minimum>numbers[i]:
            minimum=numbers[i]
        if numbers[i]%2==0:
            count+=1
    return maximum,minimum,count,total




numbers=list(map(int,input().split()))
a=b=c=d=analyze(numbers)
print("最大值:",a)
print("最小值:",b)
print("偶数个数:",c)
print("总和:",d)