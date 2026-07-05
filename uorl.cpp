#include <iostream>
using namespace std;
int main() {
    char dot;
    cout<< "Enter the input:";
    cin>> dot;
    if (dot>='a' && dot<='z') {
        cout << "lowercase";
    } else if (dot>='A' && dot<='Z') {
        cout <<"UPPERCASE";
    } else {
        cout<< "Enter valid input.";
    }
    return 0;
}