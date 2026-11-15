def analyze(numbers):
    even_count = 0
    odd_count = 0
    total = 0

    for x in numbers:
        if x % 2 == 0:
            even_count += 1
        else:
            odd_count += 1

        total += x

    return even_count, odd_count, total


numbers = list(map(int, input().split()))

a, b, s = analyze(numbers)

print("偶数个数：", a)
print("奇数个数：", b)
print("总和：", s)