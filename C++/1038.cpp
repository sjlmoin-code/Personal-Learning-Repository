#include<iostream>
using namespace std;
int main()
{
	int n,x,y,s;
	cin>>n>>x>>y;
    s=y%x;
    if(y/x>n)cout<<0<<endl;
    else if(s==0)cout<<n-y/x<<endl;
         else cout<<n-y/x-1<<endl;
	return 0;
}
