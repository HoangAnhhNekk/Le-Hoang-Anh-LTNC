#include <iostream>
using namespace std;

string caesarCipher(string s, int k) {
    string encryptedString = "";
    for (int i = 0; i < s.length(); i++) 
    {
        if (isalpha(s[i])) 
        { 
            char base = isupper(s[i]) ? 'A' : 'a'; 
            encryptedString += ((s[i] - base + k) % 26) + base; 
        } 
        else 
        {
            encryptedString += s[i]; 
        }
    }
    return encryptedString;
}

int main() 
{
    int n, k;
    string str;
    cin >> n; 
    cin >> str; 
    cin >> k; 
    cout << caesarCipher(str, k) << endl; 
    
    return 0;
}
