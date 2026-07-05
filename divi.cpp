#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number :";
    cin >> a;
    if (a%55==0) {
        cout<< "Divisible by 55.";
    } else if (a%5==0) {
        cout<< "Divisible by 5.";
    } else if (a%11==0) {
        cout << "Divisible by 11.";
    } else {
        cout << "Divisible by neither 11 nor 5.";
    }
    return 0;
}