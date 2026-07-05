#include <iostream>
using namespace std;
int main () {
    char oi;
    cout<< "Enter charector: ";
    cin>> oi;
    if ((oi>='a'&&oi<='z')||(oi>='A'&&oi<='Z')) {
        cout<< "Letter";
    } else if (oi>='0' && oi<='9') {
        cout << "Number";
    } else {
        cout<< "Special charecter";
    }
    return 0;
}