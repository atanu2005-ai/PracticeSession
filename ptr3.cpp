#include <iostream>
using namespace std;
/*A B C
  A B C 
  A B C*/
int main() {
    int n;
    cout << "Enter row number: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            char ch = ('A' + j - 1); // Key formula
            cout <<  ch << " ";
        }
        cout << endl;
    }

    return 0;
}