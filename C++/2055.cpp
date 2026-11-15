#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float a;
	cin>>a;
	if(a<=20)printf("%.2f",a*1.68);
	else printf("%.2f",a*1.98);
	return 0;
}
