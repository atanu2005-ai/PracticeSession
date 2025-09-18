#include <iostream>
using namespace std;
/*  1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1  */
int main() {

    int n;
    cout << "Enter the row number: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<= (n - i + 1); j++) {
            cout << j << " ";
        }
        for(int k=1; k<= (i - 1); k++) {
            cout << "* ";
        }
        for(int x=1; x<= (i -1); x++) {
            cout << "* ";
        }
        for(int y=(n - i + 1); y>=1; y--) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}