#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> single={1,2,2,4,4};
    int s=0;
    for (int &x: single) {
        s=s^x;
    }
    cout<< "Unique number here is: " << s;
    return 0;
}