#include<iostream>
#include<algorithm> // swap 函数在这个头文件里
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // 保证 a 是最大的
    if (a < b) swap(a, b);
    if (a < c) swap(a, c);

    // 此时 a 已经是最大的了，只需要保证 b 比 c 大
    if (b < c) swap(b, c);

    cout << a << " " << b << " " << c << endl;
    return 0;
}
