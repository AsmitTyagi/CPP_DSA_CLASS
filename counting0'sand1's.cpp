#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 1, 0, 0, 0, 0, 1, 1,2,2,2};
    int size = 12;
    int numZer0 = 0;
    int numOne = 0;
    int numTwo=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            numOne++;
        }
        if(arr[i]==2){
            numTwo++;

        }
        else
        {
            numZer0++;
        }
    }
    cout << "zero's:" << numZer0  << endl;
    cout << "one's:" << numOne  << endl;
     cout << "two's:" << numTwo  << endl;
}