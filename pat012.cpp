
/*
+----+
++--++
++++++
++++++
++--++
+----+
*/

#include <iostream>
using namespace std;
int main() {
    
    int i,n,p,q;
    cout<< "Enter a number: ";
    cin>> n;
     for(i=1;i<=n;i++) {

        for (q=1;q<=i;q++) {
            cout<<"+";
        }

        for (q=1;q<=(2*(n-i));q++) {
            cout<<"-";
        }

        for (q=1;q<=i;q++) {
            cout<<"+";
        }

        cout<<endl;

     }
     int a,b;
     for (p=1;p<=n;p++) {
     
        for (a=1;a<=(n-p+1);a++) {
        cout<<"+";
     }

     for (b=1;b<=(2*(p-1));b++) {
        cout<<"-";
     }

     for (a=1;a<=(n-p+1);a++) {
        cout<<"+";
     }

     cout<<endl;
    }
    return 0;
}