#include<stdio.h>
int main()
{
    int a,b,c;
    float d,e,sum;
    printf("请输入学号 年龄 语文 数学 英语（用空格隔开）：\n");
    scanf("%d %d %d %f %f",&a,&b,&c,&d,&e);
    sum=c+d+e;
    printf("====== Student Info ======\n");
    printf("ID:%d\n",a);
    printf("Age:%d\n",b);
    printf("Chinese:%d\n",c);
    printf("Math:%.2f\n",d);
    printf("English:%.2f\n",e);
    printf("Total:%.1f\n",sum);
    printf("Average:%.2f\n",sum/3);
    return 0;    
}