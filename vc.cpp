#include <iostream>
using namespace std;
int main() {
    char io;
    cout << "Enter a letter :";
    cin >> io;
    if (io=='a'||io=='e'||io=='i'||io=='o'||io=='u'||io=='A'||io=='E'||io=='I'||io=='O'||io=='U') {
        cout<< "VOWEL";
    } else {
        cout<< "CONSONANT";
    }
    
    return 0;
}