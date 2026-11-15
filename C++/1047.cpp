#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	// 先算出能不能被它们整除
	int c3 = (n % 3 == 0);
	int c5 = (n % 5 == 0);
	int c7 = (n % 7 == 0);
	int count = c3 + c5 + c7; // 统计能被几个数整除

	if(count == 3) {
        cout<<"3 5 7"<<endl; // 对应情况1
    }
	else if(count == 2) {
		if(c3 && c5) cout<<"3 5"<<endl; // 对应情况2
		else if(c3 && c7) cout<<"3 7"<<endl;
		else cout<<"5 7"<<endl;
	}
	else if(count == 1) {
		if(c3) cout<<"3"<<endl; // 对应情况3
		else if(c5) cout<<"5"<<endl;
		else cout<<"7"<<endl;
	}
	else {
        cout<<"n"<<endl; // 对应情况4
    }
    
	return 0;
}
