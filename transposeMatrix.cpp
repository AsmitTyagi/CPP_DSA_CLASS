#include <iostream>
using namespace std;

void transpose(int arr[][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < c; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printarray(int arr[][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << "Original array:" << endl;
    printarray(arr, rows, cols);

    transpose(arr, rows, cols);

    cout << "Transposed array:" << endl;
    printarray(arr, cols, rows);

    return 0;
}