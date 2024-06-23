//array must be sorted
//it works by repeatedly dividing the search interval in half until the target value is found or the interval is empty.
// The search interval is halved by comparing the target element with the middle value of the search space.

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2; // Corrected mid calculation to avoid overflow

        if (arr[mid] == key) {
            return true;
        }
        if (key > arr[mid]) {
            // Go to the right part
            start = mid + 1;
        } else {
            // Go to the left part
            end = mid - 1;
        }
    }
    return false;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    bool result = binarySearch(arr, 6, 4);
    cout << (result ? "Key found" : "Key not found") << endl;
    return 0;
}
// time complexity = (log n)