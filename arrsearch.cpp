#include <iostream>
using namespace std;

int main() {
int n;
cout << "Enter the size if the array:" << endl;
cin >> n;
int arr [n];
for(int i=0; i<n; i++){
    cout << "Enter value No. " << i+1 << " : ";
    cin >> arr[i];
};
    cout << "So the values are: ";
for(int i=0; i<n; i++){
    cout << arr[i] << " || ";
};
cout << endl;
char c;
cout << "Do you want to search a certain index value? [y/n]" << endl;
cout << "=> ";
cin >> c;
while(c == 'y'){
    int x;
    cout << "Enter the index number: ";
    cin >> x;
    cout << "The value is " << arr[x-1] << endl;
    cout << "Do you want to search a certain index value again? [y/n]" << endl;
    cout << "=> ";
    cin >> c;
}
    return 0;
}