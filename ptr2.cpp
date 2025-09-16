#include <iostream>
using namespace std;
/*1
  2 3
  3 4 5
  4 5 6 7
  5 6 7 8 9*/
int main() {
    int n;
    cout << "Enter row number: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << (i + j - 1) << " "; // (i + j - i) is the key formula here
        }
        cout << endl;
    }

    return 0;
}