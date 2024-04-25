#include <iostream>

#include <cmath>
using namespace std;
int main()
{
    int x1, x2;
    int v1, v2;
    
    cin >> x1 >> v1;
    cin >> x2 >> v2;
    
    if((v1 <= v2 && x1 <x2) || (x1 > x2 && v1 > v2))
    {
        cout << "NO";
    }
     else
     {
         if(abs(x1-x2) % abs(v2-v1) == 0)
         {
         cout <<"YES";
         }
         
         else cout <<"NO";
     }
}
