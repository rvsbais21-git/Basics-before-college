#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int j = 1; j <= n; j++) {

        char a = 'A';

        for (int c = 1; c <= n; c++) {
            cout << a << " ";
            a++;
        }

        cout << endl;
    }

    return 0;
}