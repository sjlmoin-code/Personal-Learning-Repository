#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float sum=9.6,high=9.4,low=9.8;
	float a=sum*6-high*5,b=sum*6-low*5;
	printf("%5.2f",(sum*6-a-b)/4);
	return 0;
}
