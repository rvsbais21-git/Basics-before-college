#include <iostream>
using namespace std;
int main() {
    float a;
    char i;
    cout<< "Press '1' to convert Celsius to Frenheit or '2' to convert Farenheit to Celsius ->" <<endl;
    cin>> i; 
    if (i=='1') {
        cout<< "Enter tempreture in Celcius: ";
        cin >> a;
        cout<< "Tempreture in Farenheit is: " << (a*(9.0/5.0))+32 << "F" <<endl;
    } else if (i=='2') {
        cout<< "Enter tempreture in Farenheit: ";
        cin >> a;
        cout<< "Tempreture in Celsius is: " << 	(a - 32)*(5.0/9.0) << "C" <<endl;
    } else {
        cout<< "Invalid input.";
    }
    return 0;
}