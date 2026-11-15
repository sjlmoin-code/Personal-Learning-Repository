#include<stdio.h>
int main()
{
    int i,j,s,n=0;
    for(i=100;i<=999;i++)
    {
        s=i;
       for(j=2;j<i;j++)
       {
         if(i%j==0)
         {
            s=0;
            break;
         }
       }
        if(s!=0)
        {
            printf("%4d",s);
            n++;
            if(n%8==0)
            {
              printf("\n");
            }
        }
    }
    return 0;
}