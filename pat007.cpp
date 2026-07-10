#include <iostream>
using namespace std;
int main () {
    int a,n,i,q;
    cout<<"Enter the number: ";
    cin>> n;
    for (i=1;i<=n;i++) {

        for (q=1,a=i;q<=n && a>0;q++) {
            cout<< a << " ";
            a--;
        }
        cout<<endl;
    }
    return 0;
}