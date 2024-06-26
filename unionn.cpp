#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //     int arr[] = {1, 2, 3, 4};
    //     int sizea = 4;
    //     int brr[] = {5, 6, 7};
    //     int sizeb = 3;

    //     vector<int> ans;
    //     // pusha ll the elements to vector arr
    //     for (int i = 0; i < sizea; i++)
    //     {
    //         ans.push_back(arr[i]);
    //     }

    //     // push all the element to vector brr
    //     for (int i = 0; i < sizeb; i++)
    //     {
    //         ans.push_back(brr[i]);
    //     }
    //     // printing

    //  for (int i=0 ; i<ans.size();i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // interssection
    vector<int> arr{1, 2, 3, 4, 5, 6};
    vector<int> brr{4, 5, 6, 7, 8, 9};
    vector<int> ans;

    // outeer loop on arr vector
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        // inner loop on brr vector
        for (int j = 0; j < arr.size(); j++)
        {
            if (element == brr[j])
            {
                ans.push_back(element);
            }
        }
    }
    // print ans
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;
}