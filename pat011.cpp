/*
___+___
__+ +__
_+   +_
+     +
_+   +_
__+ +__
___+___
*/
#include <iostream>
using namespace std;
int main () {
    int i,n,j,s=0,p,q;
    cout<<"Enter the number: ";
    cin>>n;
    q=n;
    for (p=1;p<=q;p++){
        cout<<"_";
    }
    cout<<"+";

    for (p=1;p<=q;p++){
        cout<<"_";
    }
    cout<<endl;
    for(i=1;i<=n;i++) {
    for(j=n-i;j>0;j--) {
        cout<<"_";
    }
    
    cout<<"+";

    for(s;s<=i+1;s=s+2) {
        cout<< " ";
    }

    cout<<"+";

    for(j=n-i;j>0;j--) {
        cout<<"_";
    }
    cout<<endl;
    
}
return 0;
}