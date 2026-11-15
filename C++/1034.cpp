#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double x1,y1,x2,y2,x3,y3;
	scanf("%lf %lf",&x1,&y1);
	scanf("%lf %lf",&x2,&y2);
	scanf("%lf %lf",&x3,&y3);
	double a1=x1-x2,a2=x2-x3,a3=x3-x1;
	double b1=y1-y2,b2=y2-y3,b3=y3-y1;
	double c=sqrt(a1*a1+b1*b1);
	double d=sqrt(a2*a2+b2*b2);
	double e=sqrt(a3*a3+b3*b3);
	double p=(c+d+e)/2;
	printf("%.2f\n",sqrt(p*(p-c)*(p-d)*(p-e)));
	return 0; 
}
