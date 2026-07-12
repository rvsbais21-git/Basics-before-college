/*
0 1 1 2 3 5 8 13 21
*/

#include <iostream>
using namespace std;

int main() {

int c=0, q=1, r, i, n;
cout << "Enter a number: ";
cin>> n;
cout << " 0 1 ";
for (i=1;i<=n;i++) {
r=c+q;
c=q;
q=r;
cout << r << " ";
}
return 0;
}
