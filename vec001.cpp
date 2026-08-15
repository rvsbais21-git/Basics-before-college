/*
1 1 2 3 5 
a=1 b=1
cout b 
c=b
b=a+b
a=c
cout b
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,q,b,a;
    vector<char> vector1;
    cout<< "Size of vector: " << vector1.size() <<endl;
    vector1.push_back('a');
    vector1.push_back('b');
    vector1.push_back('c');
    vector1.push_back('d');

    for(char x: vector1) {
        cout<< x <<endl; 
    }
    cout<< "Size of vector after pushback: " << vector1.size() <<endl;
    cout<< vector1.front() << endl << vector1.back() <<endl;
    vector1.pop_back();
    cout<<vector1.back() <<endl;
    cout<< "Size of vector after popback: " << vector1.size() <<endl;
    return 0;
}