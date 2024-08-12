#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Function to recursively check the string for occurrences of the key character
void checkString(string str, int n, int i, char key, vector<int>& arr) {
    // Base case: if the current index i is greater than or equal to the length of the string, stop the recursion
    if (i >= n) {
        return;
    }

    // If the character at the current index matches the key, store the index in the vector
    if (str[i] == key) {
        arr.push_back(i);
    }

    // Recursive call to check the next character in the string
    return checkString(str, n, i + 1, key, arr);
}

int main() {
    int i = 0; // Initial index to start checking the string
    string str = "asmittyagi"; // Input string
    int n = str.length(); // Length of the string
    char key = 't'; // Character to search for in the string
    vector<int> arr; // Vector to store the indices where the character is found

    // Function call to check the string
    checkString(str, n, i, key, arr);

    // Output the indices where the character was found
    cout << "Character '" << key << "' found at indices: ";
    for (auto val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
 