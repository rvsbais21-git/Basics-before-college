#include <iostream>
using namespace std;
int main () {
    int a,n,i,q;
    cout<<"Enter the number: ";
    cin>> n;
    for (n,i=1;i<=n;i++) {

        for (a=1,i,q=1;q<=i;q++) {
            cout<< a << " ";
            a++;
        }
        cout <<endl;
    }
    return 0;
}