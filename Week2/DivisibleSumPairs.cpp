#include <iostream>
#include <vector>
using namespace std;
void check(int n, int k)
{   
    vector<int> arr(n);
    for(int i =0;i<n;i++)

    {
        cin >> arr[i];
    }
    int x =0;
    for(int i =0; i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%k == 0)
            {
                x++;
            }
        }
    }
    cout << x;
}


int main()
{
    int a, b;
    cin >> a >> b;
    check(a,b);
}
