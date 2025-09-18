#include <iostream>
using namespace std;
/*A B C
  B C D
  C D E*/
int main() {
    int n;
    cout << "Enter the number of row: ";
    cin >> n;
    for (int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            int start = (i + j - 1);
            char ch = ('A' + start - 1);
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}