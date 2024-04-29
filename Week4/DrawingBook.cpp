#include <iostream>
using namespace std;
int main()
{
    int n,p;
    cin >>n>>p;

    if(p<=n/2)
    {
        cout << p/2;
    }


    if(p>n/2)
    {
       if(n%2==0 && n!=p)
       {
        cout << (n-1-p)/2 + 1;
       }

       else cout << (n-p)/2;
    }
}
