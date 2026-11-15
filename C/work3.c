#include <stdio.h>
#include <math.h>
int main()
{
    double m, s = 0.0, t, n; 
    int a = 1, j = 1; 
    double sum= 1.0; 
    scanf("%lf", &m); 
    n=m; 
    do
    {
        t=j*(n/sum); 
        s+=t; 
        a++;             
        j=-j;          
        n*=m;  
        sum *= a;       

    } while (fabs(t)>= 1e-4); 
    printf("%.2f\n", s); 
    return 0;
}