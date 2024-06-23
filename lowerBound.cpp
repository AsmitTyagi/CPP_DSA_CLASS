// given a  sorted aarray of N integers ans an integer x , write a program to find the lower bound of x
// the lower bound algo finds the first or smallest index ina  sorted array where thr value at that indexis greater than or equals to the given key i.e. X
// lower bound = arr[index]>=x
// upper bounnd = arr[index ]>x  strictly greater than

#include <iostream>
using namespace std;
int lowerBound(int arr[], int size, int key)
{
    int start = 0;
    int end = start - 1;
    int ans = size;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] >= key)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 8, 20};
    cout << lowerBound(arr, 6, 2);

    return 0;
}