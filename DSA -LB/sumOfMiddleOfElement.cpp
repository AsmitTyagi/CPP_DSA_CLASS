#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
int sumOfMiddle(vector<int>&arr1,vector<int>&arr2){
    vector<int>result;
    for(int i =0;i<arr1.size();i++){
        result.push_back(arr1[i]+arr2[i]);

    }
    sort(result.begin(),result.end());
    int mid=result.size()/2;
    return result[mid]+result[mid+1];

    
}
};
int main() {
    // Sample arrays
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    // Creating an object of the Solution class
    Solution solution;

    // Calling the function and printing the result
    int result = solution.sumOfMiddle(arr1, arr2);
   cout << "Sum of middle elements: " << result << endl;

    return 0;
}
