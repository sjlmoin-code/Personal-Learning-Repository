#include<cstdio>
using namespace std;
int main()
{
	int a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	int d=b-a;
	printf("%d",a+(n-1)*d);
	return 0;
}
