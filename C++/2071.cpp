#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	float s=float(x*87+y*85)/(x+y);
	printf("%.4f\n",s);
	return 0;
}
