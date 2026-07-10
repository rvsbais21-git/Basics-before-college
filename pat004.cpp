/*

*/
#include <iostream>
using namespace std;
int main () {
    int n,i,q,a;
    cout<< "Enter a number:";
    cin>>n;
    for (i=1,n;i<=n;i++) {
        for(i,q=1;q<=i;q++) {
            cout<< "* ";
        }
        cout<< endl;
    }


    return 0;
}