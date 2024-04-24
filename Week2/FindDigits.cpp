#include <iostream>
using namespace std;
void check(int n)
{
    int a =n;
    int k=0;
    while (n>0)
    {
        int b = n%10;
        if(b !=0 && a%b ==0)
        {
            k++;
        }
        n /= 10;
    }
    cout << k << endl;
}

int main()
{
    int x;
    cin >>x;
    for (int i=0;i<x;i++)
    {
        int y;
        cin >>y;
        check(y);
    }
}
