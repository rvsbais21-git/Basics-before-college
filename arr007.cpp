
#include <iostream>
using namespace std;
int main() {
    int n,q,t;
    cout<< "Enter number of elements in array: ";
    cin>>n;
    int arr [n];
    int i;
    
    cout << "Enter array values: ";

    for (i=0;i<n;i++) {
        cin>> arr[i];
    }

    for (i=0;i<n;i++) {

        t=arr[i];
        int s=0;
        for (q=0;q<n;q++) {
            if (arr[q]==t) {
                s++;
            }
        }
        if (s==1) {
            cout<< t << " ";
        }
    }
    return 0;
}