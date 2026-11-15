text = input()
target = input()

count = 0
position = -1

for i in range(len(text)):
    if text[i] == target:
        count += 1

        if position == -1:
            position = i

print("出现次数:", count)

if position != -1:
    print("第一次出现的位置:", position)
else:
    print("没有找到该字符")