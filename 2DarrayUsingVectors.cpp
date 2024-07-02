#include<iostream>
#include<vector>
using namespace std;


int main(){
    
vector <vector<int> > arr;
vector<int> a{1,2,3};
vector<int> b{4,5,6};
vector<int> c {7,8,9};
arr.push_back(a);
arr.push_back(b);
arr.push_back(c);
for(int i=0; i<arr.size();i++){
    for (int j=0; j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;

}




/// when you want to take input from user of a matrix
int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create a 2D vector with the given dimensions
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Take input for each element of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Print the matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }




return 0;}