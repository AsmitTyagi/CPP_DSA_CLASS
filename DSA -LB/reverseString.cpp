#include <iostream>
#include <cstring>
using namespace std;

void ReverseCharArray(char name[]) {
    int i = 0;
    int n = strlen(name); // Use strlen to get the length of the char array
    int j = n - 1;
    while (i <= j) {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
void replceSpace(char sentence[]){
    int i =0;
     int n = strlen(sentence);
     for (int i =0; i<n ; i++){
        if (sentence[i]== ' '){
            sentence[i] = '@';

        }
     }
}

int main() {
    // char name[100];
    // cout << "Enter a string: ";
    // cin >> name; // Input the char array
    // cout << "Initially: " << name << endl;
    // ReverseCharArray(name);
    // cout << "After reverse: " << name << endl;

    char sentence[100];
    cin.getline(sentence, 100);
    replceSpace(sentence);
    cout<<"printing modified sentance :"<< sentence<< endl;



    return 0;
}
