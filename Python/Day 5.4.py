def analyze(numbers):
    count = 0
    total = 0
    n = len(numbers)
    for i in range(n - 1):
        swapped = False
        for j in range(n - 1 - i):
            if numbers[j] > numbers[j + 1]:
                numbers[j], numbers[j + 1] = numbers[j + 1], numbers[j]
                swapped = True
        if not swapped:
            break
    minimum = numbers[0]
    maximum = numbers[-1]
    for a in numbers:
        total += a
        if a % 2 == 0:
            count += 1

    return numbers, maximum, minimum, count, total

numbers = list(map(int, input().split()))
a, b, c, d, e = analyze(numbers)
print("排序结果:", *a)
print("最大值:", b)
print("最小值:", c)
print("偶数个数:", d)
print("总和:", e)