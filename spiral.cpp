#include <iostream>
using namespace std;

int main() {
    cout << "Enter row and column size for the spiral matrix: " << endl;
    int n, m;
    cin >> n >> m;
    cout << "Enter the elements of the matrix: " << endl;
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
           cin >> arr[i][j]; // Initialize the matrix with zeros
        }
    }
    cout << "The matrix is: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " "; // Print the matrix
        }
        cout << endl;
    }
    cout << "Spiral order of the matrix is: " << endl;
    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    //for row start
    while(row_start <= row_end && col_start <= col_end) {
        // Print the first row
        for(int i = col_start; i <= col_end; i++) {
            cout << arr[row_start][i] << " ";
        }
        row_start++;

        // Print the last column
        for(int i = row_start; i <= row_end; i++) {
            cout << arr[i][col_end] << " ";
        }
        col_end--;

        // Print the last row if there are still rows left
        if(row_start <= row_end) {
            for(int i = col_end; i >= col_start; i--) {
                cout << arr[row_end][i] << " ";
            }
            row_end--;
        }

        // Print the first column if there are still columns left
        if(col_start <= col_end) {
            for(int i = row_end; i >= row_start; i--) {
                cout << arr[i][col_start] << " ";
            }
            col_start++;
        }

    }

    return 0;
}