/*
4 4 4 4
3 3 3
2 2
1
for inner loop take q=1 and a=n, q<=n, q++
then print a and " " and come outside loop and end line and n-- 
*/
#include <iostream>
using namespace std;
int main () {
    int a=1,s,n,i,q;
    cout<<"Enter the number: ";
    cin>> n;
    s=n;
    for (i=1;i<=n;i++) {

        for(q=1,a=s;q<=s;q++){
            cout << a << " ";
        }
        cout<< endl;
        s--;
    }
    return 0;
}