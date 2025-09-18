#include <iostream>
using namespace std;
/*   * * * *
       * * *
         * *
           *    */
int main() {
    int n;
    cout << "Enter the row number: ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<= (i-1); j++) {
            cout << "  ";
        }
        for(int str=1; str<= (n - i + 1); str++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}