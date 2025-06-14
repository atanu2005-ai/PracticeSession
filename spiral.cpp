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
    for(int col=col_start; col <= col_end; col++) {
        cout << arr[row_start][col] << " ";
    }
    //for column end
    for(int row=row_start+1; row <= row_end; row++) {
        cout << arr[row][col_end] << " ";
    }
    //for row end
    if(row_start < row_end) {
        for(int col=col_end-1; col >= col_start; col--) {
            cout << arr[row_end][col] << " ";
        }
    }
    //for column start  
    if(col_start < col_end) {
        for(int row=row_end-1; row > row_start; row--) {
            cout << arr[row][col_start] << " ";
        }
    }

    return 0;
}