/*
Recursion occurs when a function calls itself directly or indirectly. It's a powerful concept used to solve problems that can be broken down into smaller, similar subproblems.
Key components of recursion:
Base Case:
This is the condition that stops the recursion. Without it, the function will call itself indefinitely, leading to a stack overflow error.
Recursive Case:
This is where the function calls itself with a modified input, moving closer to the base case.
*/


//fibonacie series
#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;   
    return fib(n-1) + fib(n-2);
}

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Fibonacci number is: " << fib(n) << endl;
//     return 0;
// }




// Problem Statement
// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return the count of distinct ways to climb to the top.
// Note: The order of the steps taken matters.

// Examples:

// Input: N = 3
// Output: 3
// Explanation:

// There are three distinct ways of climbing a staircase of 3 steps :

// [1, 1, 1], [2, 1] and [1, 2].


// Another axample
// Input:  N = 2
// Output: 2
// Explanation:

// There are two distinct ways of climbing a staircase of 3 steps :

// [1, 1] and [2].

bool isSorted (int arr[], int size){
    if (size ==0||size==1) return true;
    if(arr[0]>arr[1]){
        return false;

    }
    else{
        return isSorted(arr+1,size-1);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
       isSorted(arr, 6 );
    cout<<isSorted;
    return  0;
    

}

