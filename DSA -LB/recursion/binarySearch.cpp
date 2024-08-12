#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(int key, int start, int end, vector<int>&arr)
{
    if (start > end)
    {
        return -1;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid]== key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(key, start, mid - 1, arr);
    }
    else
    {
        return binarySearch(key,  mid +1,end, arr);
    }
}
int main()
{
    int n, key;
    cout << "enter the length of the array";
    cin >> n;
    vector<int> arr(n);
    cout << "enter the elements in the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); // optional

    cout << "enter the key you want to search";
    cin >> key;

    int result = binarySearch(key,0, n-1,arr);

    if (result == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << "element found at index " << result;
    }
    return 0;
}
