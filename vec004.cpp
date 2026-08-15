//

#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    int n,i,c,s=0,k=0;
    cout<<"Enter number of elements you want in the vector: ";
    cin>> n;
    vector<int> vect (n,0);
    cout<< "Enter the values assigned to elements in the vector: ";
    for (int &x: vect) {
        cin>> x;
    }
    // BEGIN HERE {1,2,3,4,5,6}

    for (i=0;i<n/2;i++) {
        c=vect[i];
        vect[i]=vect[n-i-1];
        vect[n-i-1]=c;
    }
    for (int &y:vect) {
        cout << " " <<y;
    }
    return 0;
}