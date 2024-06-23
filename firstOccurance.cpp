#include<iostream>
using namespace std;

int First_occurrence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;    // Default value to indicate key not found
    while (start <= end) {
        mid = start + (end - start) / 2; // Corrected mid calculation to avoid overflow
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1; // Move to the left half to find the first occurrence
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1; // Corrected this line to update the end pointer instead of start
        }
    }
    return ans;
}

int main() {
    int arr[] = {2, 3, 3, 3, 5, 7, 6,6};
    int result1 = First_occurrence(arr, 8, 3);
    int result2 = First_occurrence(arr, 8, 6);
    cout << "First occurrence of 3 is at index " << result1 << endl;
    cout << "First occurrence of 6 is at index " << result2 << endl;
    return 0;
}
