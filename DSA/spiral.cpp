#include <iostream>
using namespace std;

void spiralPattern(int arr[][3], int row, int col) {
    int toprow = 0;
    int bottomrow = row - 1; // Initialize bottomrow to row - 1
    int leftcol = 0;
    int rightcol = col - 1;
    while (toprow <= bottomrow && leftcol <= rightcol) {
        // print top row
        for (int i = leftcol; i <= rightcol; i++) {
            cout << arr[toprow][i] << " ";
        }
        toprow++;
        // print right col
        for (int i = toprow; i <= bottomrow; i++) {
            cout << arr[i][rightcol] << " ";
        }
        rightcol--;
        // print bottom row
        if (toprow <= bottomrow) { // Check to avoid duplicate printing
            for (int i = rightcol; i >= leftcol; i--) {
                cout << arr[bottomrow][i] << " ";
            }
            bottomrow--;
        }
        // print left col
        if (leftcol <= rightcol) { // Check to avoid duplicate printing
            for (int i = bottomrow; i >= toprow; i--) {
                cout << arr[i][leftcol] << " ";
            }
            leftcol++;
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    spiralPattern(arr, 3, 3);
    return 0;
}