/*

*/
#include <iostream>
using namespace std;
int main () {
    int n;
    cout<< "Enter number of elements in array: ";
    cin>>n;
    int arr [n];
    int i;
    
    cout << "Enter array values: ";

    for (i=0;i<n;i++) {
        cin>> arr[i];
    }
     
 int s=0;
 
 for (i=0;i<n;i++) {
    s+=arr[i];
 }
cout<< "Sum: " <<s;
    return 0;
}