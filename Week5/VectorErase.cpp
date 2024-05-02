#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a;
    cin >> a;

    for(int i = a - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    int x, y;
    cin >> x >> y;

    int z = y - x;

    for(int j = 0; j < z; j++)
    {
        for(int i = x - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    cout << n << endl;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
