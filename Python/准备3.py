a=int(input("请输入成绩："))
if a>=90 and a<=100:
    print("等级：优秀")
elif a>=80 and a<90:
    print("等级：良好")
elif a>=60 and a<80:
    print("等级：及格")
elif a<60 and a>=0:
    print("等级：不及格")
else:
    print("输入无效")