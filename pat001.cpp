#include <iostream>
using namespace std;
int main () {
    int n,i,a;
    cout<< "Enter a number: " ;
    cin>> n;
   for (a=1;a<=n;a++) {
    for (i=1,n;i<=n;i++) {
        cout << i << " ";
    }
    cout<<endl;
}

    return 0;
}