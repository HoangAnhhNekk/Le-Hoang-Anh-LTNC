#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    long long b;
    char c;
    
    float x;
    double y;
    
    cin >> a >>b >>c >>x >>y;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << x << endl;
    cout << fixed << setprecision(9) << y << endl;
}
