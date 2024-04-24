#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


void update(int *a, int *b)
{   
    
    int tong = *a + *b;
    
    int hieu = abs(*a - *b);
    
    *a = tong;
    *b = hieu;
}

int main()
{
    int x, y;
    cin >> x >> y;
    
    update (&x, &y);
    cout << x << endl << y;
    return 0;
}
