#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float a;
	cin>>a;
	switch((int)(a/5))
	{
		case 0:printf("%.3f",2.5-a);break;
		case 1:printf("%.3f",2-1.5*(a-3)*(a-3));break;
		case 2:case 3:printf("%.3f",a/2-1.5);break;
	}
	return 0;
}
