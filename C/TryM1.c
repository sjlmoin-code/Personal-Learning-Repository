#include<stdio.h>
int main()
{
    const double pi=3.14159;
    double r;
    scanf("%lf",&r);
    printf("area=%.2f\n",pi*r*r);
    printf("perimeter=%.2f\n",2*r*r);
    return 0;
}