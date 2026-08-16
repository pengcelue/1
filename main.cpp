#include <iostream>

using namespace std;

int main() {
    double a = 20.0;
    double b = 4.0;

    cout << "a = " << a << ", b = " << b << endl;

    cout << "加法 a + b = " << a + b << endl;
    cout << "减法 a - b = " << a - b << endl;
    cout << "乘法 a * b = " << a * b << endl;

    if (b != 0) {
        cout << "除法 a / b = " << a / b << endl;
    } else {
        cout << "除法 a / b = 错误：除数不能为 0" << endl;
    }

    return 0;
}
