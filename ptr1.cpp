#include <iostream>
using namespace std;
/*1
  2 3
  4 5 6
  7 8 9 10*/
int main() {

    int n;
    cout << "Enter row number: ";
    cin >> n;
    int counter = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
    return 0;
}