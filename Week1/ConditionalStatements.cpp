#include <iostream>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    string arr[] = {"one" ,"two" ,"three","four","five","six","seven","eight","nine"};
    if(0<n && n<10)
    {
        for(int i=0;i<10;i++)
        {
            if(i==n)
            {
                cout << arr[i-1];
            }
        }
    }
    else 
    {
        cout << "Greater than 9";
    }
}
