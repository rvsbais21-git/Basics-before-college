#include <iostream>
using namespace std;
int main () {
    int n,s=INT_MIN;
    cout<< "Enter number: ";
    cin>>n;
    int arr [n];
    int i;
    cout << "Enter: ";

    for (i=0;i<n;i++) {
        cin>> arr[i];
    }
    for (i=0;i<n;i++) {
        if (arr[i]>=s) {
            s=arr[i];
        }
    }
   
    cout << "Greatest one: " << s;
    return 0;
}