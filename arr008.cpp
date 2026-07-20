/*
Make two arrays.
outer takes values from array one and stores in c, inner loop runs to check if at least on arr[] is
equal to c, use count++
*/
#include <iostream>
using namespace std;
int main () {
    int n,q,t,c;
    // FIRST ARRAY
    cout<< "Enter number of elements in array: ";
    cin>>n;
    int arr [n];
    int i;
    
    cout << "Enter array values: ";

    for (i=0;i<n;i++) {
        cin>> arr[i];
    }
// SECOND ARRAY
    cout<< "Enter number of elements in array: ";
    cin>>t;
    int car [t];
    
    cout << "Enter array values: ";

    for (q=0;q<t;q++) {
        cin>> car[q];
    }
// LOOP
    for (i=0;i<n;i++) {
        c=arr[i];
        int s=0;
        for (q=0;q<t;q++) {
            if (c==car[q]) {
                s++;
            }
        }
        if (s>=1) {
            cout<< c << " ";
        }
    }
    return 0;
}
//Given in arr all values are unique