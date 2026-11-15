#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, sum=0;
	double s;
	char b;
	cin >> a >> b;
	switch(b)
	{
		case 'y': sum += 5; break;
		default: break;	
	}
	if(a<=1000) 
	{
		sum+=8;
	}
	else 
	{
		sum+=8;
		s=ceil((a-1000)/500.0); 
		sum+=s*4;
	}

	cout<<sum<< endl;
	return 0;
}
