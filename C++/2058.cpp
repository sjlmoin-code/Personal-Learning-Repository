#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char c;
	cin>>a>>b>>c;
	if(b==0)cout<<"Divided by zero!"<<endl;
	else switch(c)
	    {
		  case '+':cout<<a+b<<endl;break;
		  case '-':cout<<a-b<<endl;break;
		  case '*':cout<<a*b<<endl;break;
		  case '/':cout<<a/b<<endl;break;
		  default: cout<<"Invalid operator!"<<endl;
	    }
	return 0;
}
