#include <iostream>
using namespace std;

/*     A
     A B A
   A B C B A
 A B C D C B A */

int main() {

    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=(n-i); j++) {
            cout << "  ";
        }
        for(int k=1; k<=i; k++) {
            int start = 1 + k - 1;
            char ch1 = 'A' + start - 1;
            cout << ch1 << " ";
        }
        for(int l=1; l<i; l++) {
            int start = i - l;
            char ch2 = 'A' + start - 1;
            cout << ch2 << " ";
        }
        cout << endl;
    }
    return 0;
}