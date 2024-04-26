#include <iostream>
using namespace std;

int count(string s)
{   
    int count = 1;
    for (char c : s)
    {
        if(isupper(c))
        {
            count ++;
        }
    }
    return count;
}

int main()
{
    string str;
    cin >>  str;
    int result = count(str);
    cout << result;
}
