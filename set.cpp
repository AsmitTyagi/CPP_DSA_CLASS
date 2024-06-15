
//1. set is a datacontainer which stores simillar datatype, dynamic in nature
//2. unique element - it do not consider duplicate elements  
//3. immutable  - we can add or remove but cant chnage the existing one 
//4. sorted order-by default the order will be ascending
#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    // Define a set with ascending order
    set<int> set1 = {4, 2, 1, 4, 7, 6, 9};
    
    // Display elements in ascending order
    cout << "Ascending: ";
    for (int i : set1){
        cout << i << " ";
    }
    cout << endl;

    // Insert an element and remove another
    set1.insert(20);
    set1.erase(4);

    // Display elements after insertion and removal
    cout << "After insertion and erasure: ";
    for (int i : set1){
        cout << i << " ";
    }
    cout << endl;

    // Define a set with descending order
    set<int, greater<int>> set2 = {5, 3, 4, 2, 5, 3, 6, 9};
    
    // Display elements in descending order
    cout << "Descending: ";
    for (int i : set2){
        cout << i << " ";
    }
    cout << endl;
    
    //unordered set
        unordered_set<int> uset ={5,3,9,7,1};
        cout<<"unordered set";
        for (int i:uset){
            cout<<i<<" ";
        } 
        cout<<endl;

        uset.insert(20);
        for (int i : uset){
            cout<<i<<" ";

        }

        

    return 0;
}


