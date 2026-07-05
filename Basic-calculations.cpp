#include <iostream>
using namespace std;
int main() {
    int a, b;
    char c;
    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    cout << "For addition, substraction, multiplication, division or modulo, press, A, S, M, D, R respectively. Input-> ";
    cin >> c;
    if (c=='P'){
        cout << a+b;
    } else if (c=='S') {
        cout << a-b;
    } else if (c=='M') {
        cout << a*b;
    } else if (c=='D') {
        cout << a/b;
    } else if (c=='R') {
        cout << a%b;
    }
    return 0;
}
