#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter number of elements: ";
    cin>>n;
    int arr [n];
    int i;
    cout << "Enter values of numbers: ";

    for (i=0;i<n;i++) {
        cin>> arr[i];
    }
    int m,c;
    for (i=0;i<n;i++) {

        for(m=i+1;m<n;m++){
            c=arr[i];
            if(arr[m]==arr[i]) {
                
            } else {
                i=c;
            }
        }
        cout<< c <<" ";
    }
    
    return 0;
}