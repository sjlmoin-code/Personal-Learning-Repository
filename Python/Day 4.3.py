text=input()
is_palindrome=True
for i in range(len(text)):
    if text[i]==text[len(text)-1-i]:
       is_palindrome=True
    else:
        is_palindrome=False
        break
if is_palindrome==True:
   print("是回文字符串")
else:
    print("不是回文字符串")