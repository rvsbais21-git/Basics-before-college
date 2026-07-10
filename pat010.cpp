/*
---1
--121
-12321
1234321
*/
#include <iostream>
using namespace std;
int main () {
    int i,n,q,p,j;
    cout<< "Enter the number: ";
    cin>>n;
    for(i=1;i<=n;i++){

        for(q=(n-i);q>0;q--) {
            cout<< "_";
        }
        for (j=1;j<=i;j++) {
            cout <<j;
        }
        for (j=i-1;j>0;j--) {
            cout <<j;
        }
        cout <<endl;
    }
    return 0;
}