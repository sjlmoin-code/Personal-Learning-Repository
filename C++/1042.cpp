#include<iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    // c 参与运算时自动转为 ASCII 码
    if (c % 2 != 0) {  
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
