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

    cout<<"Enter number searching for: ";
    int s;
    cin>>s;


    for (i=0;i<n;i++) {

        if (s==arr[i]) {
            cout << "Yes exists in index: "<< i;
            return 0;
        }    
    } 
     {cout<< "Doesn't exist";}


    return 0;

}