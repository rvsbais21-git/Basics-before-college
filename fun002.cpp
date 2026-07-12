/*
to create nCr function
one smaller funtion for factorial
one to calculate nCr
int main only prints the output
*/


#include <iostream>
using namespace std;

int fac(int n) {
    int i,m=1;
    for (i=1;i<=n;i++) {
        m*=i;
    }
    return m;
}

int nCr(int n, int r) {
    int ans = fac(n) / (fac (r) * fac (n-r));
    return ans;
}

int main() {
    int n,r;
    cout<< "Enter N: ";
    cin>>n;
    cout<< "Enter r: ";
    cin>>r;
    if (r>n) {
        cout<< "Invalid.";
    } else {
        cout<< "The answer is: " << nCr (n , r);
    }
    return 0;
}