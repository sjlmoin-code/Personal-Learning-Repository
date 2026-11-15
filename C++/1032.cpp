#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int h,r,n;
	cin>>h>>r;
	n=ceil(20000/(3.14*r*r*h));
	printf("%d",n);
	return 0;
}
