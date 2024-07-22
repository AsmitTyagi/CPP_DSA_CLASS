#include <iostream>
using namespace std;
class solution
{
public:
    bool CheckPalindrome(string s, int i, int j)
    {
        while (i <= j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    // just cheacking weather it is a palintrome or not ^
    bool validPalintrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;
        while (i <= j)
            {
                if (s[i] != s[j])
            {
                // eak baar i ko del karenge eak baar j ko jis pattern mai b palintrome bnn raha hoga usko rakhenge
                return CheckPalindrome(s, i + 1, j) || CheckPalindrome(s, i, j - 1);
            }
            else
            {
                i++;
                j--;
            }
            }
        return true;
    }
};
int main()
{
    string s;
    cout<<"enter the palointrome:";
    cin>>s;
    solution obj;       // solution = name of the class
    
    cout<<obj.validPalintrome(s);
    
}
