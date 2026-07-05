#include <iostream>
using namespace std;
int main() {
    float a;
    double PI=3.14159;
    cout << "Enter number the radius (in cm): ";
    cin >> a;
    cout << "Area of the Circle: " << a*a*PI << "cm^2" << endl;
    cout << "Circumfrence: " << 2*a*PI << "cm" <<endl; 
    return 0;
}