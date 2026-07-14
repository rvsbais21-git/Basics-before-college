
#include <climits>
#include <iostream>
using namespace std;
int main () {
    int n,s=INT_MAX,t=INT_MIN;
    cout<< "Enter number of elements in array: ";
    cin>>n;
    int arr [n];
    int i;
    
    cout << "Enter array values: ";

    for (i=0;i<n;i++) {
        cin>> arr[i];
    }
     
    // Find smallest one

    for (i=0;i<n;i++) {
        if (arr[i]<=s) {
            s=arr[i];
        }
    }
    // Find largest one

    for (i=0;i<n;i++) {
        if (arr[i]>=t) {
            t=arr[i];
        }
    }
    // indeces of smallest and largest and swap alogorithm
    int l, m;
    for (i=0;i<n;i++) {

        if (s==arr[i]) {
            l=i;
        }    
    } 
    
    for (i=0;i<n;i++) {

        if (t==arr[i]) {
            m=i;
        }    
    } 

    arr[l]=arr[l]+arr[m];            
    arr[m]=arr[l]-arr[m];    
    arr[l]=arr[l]-arr[m];

    for (i=0;i<n;i++) {
        cout<< arr[i] << " ";
    }

    return 0;
}