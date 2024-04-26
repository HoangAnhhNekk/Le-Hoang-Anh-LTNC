#include <iostream>
#include <algorithm>
using namespace std;

void check(string s)
{
    string str = "hackerrank";
    int n = str.length();
    int j=0;
    for(int i = 0;i< s.length(); i++)
    {
        if(s[i]==str[j])
        {
            j++;
        }
    }
    
    if(j==n)
    {
        cout <<"YES"<<endl;
    }
    else cout <<"NO"<<endl;
}
int main()
{   
    int x;
    cin >>x;
    string str1;
    for(int i =0;i<x;i++)
    {
        cin >> str1;
        check(str1);
    }
}
