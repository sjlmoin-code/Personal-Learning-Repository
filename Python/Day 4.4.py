def analyze(text):
    letter_count = digit_count = space_count = other_count = 0
    is_palindrome = True
    for i in range(len(text)):
        if text[i].isalpha():
            letter_count += 1
        elif text[i].isdigit():
            digit_count += 1
        elif text[i].isspace():
            space_count += 1
        else:
            other_count += 1

    for i in range(len(text) // 2):
        if text[i] != text[len(text)-1-i]:
            is_palindrome = False
            break
    return letter_count, digit_count, space_count, other_count, is_palindrome
text = input()
a, b, c, d, is_palindrome = analyze(text)
print("字母个数:", a)
print("数字个数:", b)
print("空格个数:", c)
print("其他字符个数:", d)
print("是否为回文:", is_palindrome)