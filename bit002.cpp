#include <iostream>
using namespace std;
int main () {
    int i,n,c,j=0;
    cout<<"Enter a number: ";
    cin>>n;
    for (i=0;i<=32;i++) {
        c=(1<<i);
        if (c==n) {
            j++;
        }
    }
    if (j==1) {
        cout << "True.";
    } else {
        cout<< "False";
    }
}