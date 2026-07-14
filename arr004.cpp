/*
swap a numner algorithm on arr[i] and arr[n-i-1]
a and b  12 34
a=a+b   
b=a-b    
a=a-b

0 1 2 3 4 5
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
     
    if (n%2==0) {
        for (i=0;i<=((n-1)/2);i++) {
            arr[i]=arr[i]+arr[n-i-1];            
            arr[n-i-1]=arr[i]-arr[n-i-1];    
            arr[i]=arr[i]-arr[n-i-1];
        
        }
    } else {
        for (i=0;i<=(((n-1)/2)-1);i++) {
            arr[i]=arr[i]+arr[n-i-1];            
            arr[n-i-1]=arr[i]-arr[n-i-1];    
            arr[i]=arr[i]-arr[n-i-1];
        
        }
    }

    for (i=0;i<n;i++) {
        cout<< arr[i] << " ";
    }


    return 0;
}