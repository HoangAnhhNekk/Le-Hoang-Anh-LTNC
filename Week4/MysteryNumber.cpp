#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    
    vector<int> arrA(n);
    vector<int> arrB(n+1);
    
    for(int i=0;i<n;i++)
    {
        cin >>arrA[i];
    }
    
    for(int i=0;i<(n+1);i++)
    {
        cin >>arrB[i];
    }
    
    sort(arrA.begin(), arrA.end());
        sort(arrB.begin(), arrB.end());
   
    for(int i=0;i<(n+1);i++)
    {
        if(arrB[i] != arrA[i])
        {
            cout << arrB[i];
            break;
        }
    }
    
    
}
