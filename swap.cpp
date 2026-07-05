#include <iostream>
using namespace std;
int main() {
    float a,b;
    cout << "Enter number a : ";
    cin>> a;
    cout << "Enter number b: ";
    cin >> b;
    // 34 12, 46 34, 
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "New a is: " << a <<endl;
    cout << "New b is: " << b;
    return 0;
}