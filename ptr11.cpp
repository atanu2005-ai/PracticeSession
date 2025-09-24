#include <iostream>
using namespace std;

/*  E
    D E
    C D E
    B C D E
    A B C D E  */
int main() {

    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            int start = n - i;
            char ch = 'A' + start + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}