include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   string str1, str2;
   cin >> str1 >> str2;
   int a = str1.length();
   int b =str2.length();
   
   cout << a <<" "<< b<<endl;
   cout << str1 + str2 << endl;
   
   char temp = str1[0];
   str1[0] = str2[0];
   str2[0] = temp;
   
   cout << str1 << " " << str2;
   
}
