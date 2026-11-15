#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    
    // 这里的 (int) 是初学者都会的强制类型转换
    // 1. a / b 算出 73.46...
    // 2. (int) 强制取整变成 73
    int k = (int)(a / b); 
    
    // 3. 余数 r = a - k * b
    double r = a - k * b;
    
    // 4. 输出（不用管格式，直接输出）
    cout << r << endl;
    
    return 0;
}
