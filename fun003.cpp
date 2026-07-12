/*
write all prime numbers 2 to n
tasks being repeated-
checking prime or not
taking the primes and printing them
*/


#include <iostream>
using namespace std;

int primecheck (int n) {
    int i=1, count=0;
    for (i=1;i<=n;i++) {
        if (n%i==0) {
            count++;
        }
    }
    if (count==2) {
        return 1;
    } else {
        return 0;
    }
}

void belt (int N) {
    int I=1;
    for(I=2;I<=N;I++) {
        if (primecheck (I)==1) {
            cout<< I << " ";
        }
    } 
}

int main () {
    int n;
    cout << "Enter the number: ";
    cin >>n;
    belt (n);
    return 0;
}