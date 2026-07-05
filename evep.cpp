#include <iostream>
using namespace std;
int main() {
    int i,a;
    cout <<"Enter number: ";
    cin>>a;
    if (a%2==0){
    for(i=0;i<=a;i=i+2) {
        cout<< i << " ";
    }
} else {
    for (i=1;i<=a;i=i+2) {
        cout<< i << " ";
    }
}
    return 0;

}