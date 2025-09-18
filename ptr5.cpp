#include <iostream>
using namespace std;
/*1 1 1 1 
    2 2 2
      3 3
        4*/
int main() {

    int n;
    cout << "Enter the row number: ";
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<= (i-1); j++) {
            cout << "  ";
        }
        for(int k=1; k<= (n - i + 1); k++) {
            cout << i << " ";
        } 
        cout << endl;
    }           
    return 0;
}