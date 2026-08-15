#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,i,s=0,k=0;
    cout<<"Enter number of elements you want in the vector: ";
    cin>> n;
    vector<int> vect (n,0);
    cout<< "Enter the values assigned to elements in the vector: ";
    for (int &x: vect) {
        cin>> x;
    }
    cout<< "Enter number you wish to search for: ";
    cin>> i;
    for (int &x: vect) {
        s++;
        if (i==x) {
            k++;
            cout << "Present at index: " <<s <<endl;
        }
        
    } if (k==0) {
            cout<< "Not present.";
        }
    return 0;
}