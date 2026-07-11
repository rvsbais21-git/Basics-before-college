/*
____+
___+-+
__+---+
_+-----+
+-------+
_+-----+
__+---+
___+-+
____+
*/
#include <iostream>
using namespace std;
int main () {
    int j,n,i,q=1,p,e;
    cout<< "Enter the number: ";
    cin>>n;

    e=n;

    for (j=1;j<=n;j++) {
        cout<< "_";
    }
    cout<< "+" <<endl;
    for (i=1;i<=n;i++) {
     
        for(j=(n-i);j>0;j--) {
            cout<< "_";
        }

        cout<< "+";

        for (q=1;q<=((2*(i-1)+1));q++) {
            cout<<"-";
        }
        cout<< "+" <<endl;        
    }

    int a,b,c,d,k;
    
    for(b=1;b<n;b++) {

        for (c=1;c<b;c++) {
            cout<<"_";
        }

        cout<<"+";

        for (d=1;d<=(2*(n-b)+1);d++) {
            cout<<"-";
        }
 
        cout<< "+" <<endl;

    } 

    for(k=1;k<=(n-1);k++) {
        cout<< "_";
    }
    cout<<"+-+" <<endl;

    for (a=1;a<=n;a++) {
        cout<< "_";
    }
    cout << "+" <<endl;
return 0;
}


