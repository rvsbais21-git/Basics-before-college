/* This is a pattern where we have to follow 
123
456
789
so first we store 3 or a random number n in int 'n'. then we first have to make a loop to run the line three times
then we make a loop to run the pattern of number, every time, it only prints 'n' numbers and and it doesn't restart,
it continues from where we left.
 */
#include <iostream>
using namespace std;

int main () {
int n,i,a=1,q;
    cout<< "Enter the number: ";
    cin>>n;

    for (n,i=1;i<=n;i++) {

        for (n,q=1;q<=i;q++) {
            cout<< "* ";
            a++;
        }
        cout <<endl;
    }

    return 0;
}