#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout << "  ";
        }
            cout << "* ";
            cout << endl;
    }
    for(int k=n-1; k>=1; k--){
        for(int l=1; l<=k-1; l++){
            cout << "  ";
        }
            cout << "* ";
            cout << endl;
    }

    return 0;
}
