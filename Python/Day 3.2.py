numbers = list(map(int, input().split()))

maximum = numbers[0]
position = 0

for i in range(1, len(numbers)):
    if numbers[i] > maximum:
        maximum = numbers[i]
        position = i

print("最大值:", maximum)
print("位置:", position)