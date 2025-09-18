#include <iostream>
using namespace std;
/*      1
      2 3
    4 5 6
  7 8 9 10      */
int main() {

    int n;
    cout << "Enter the row number: ";
    cin >> n;
    int counter =  1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<= (n-i); j++) {
            cout << "  ";
        }
        for(int k=1; k<=i; k++) {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
    return 0;
}