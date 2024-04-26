#include <iostream>
#include <string>
using namespace std;

string check(string s)
{
    int time = stoi(s.substr(0,2));
    string dayornight = s.substr(8,2);
    string a = s.substr(2,6);
    
    if(time == 12 && dayornight == "AM") 
    {
        time = 0;
        
    }
    if(time < 12 && dayornight == "PM")
    {
        time = time + 12;
    }
    
    string result = (time < 10 ? "0" : "") + to_string(time) + a;
    
    return result;
    
}

int main()
{
    string str;
    cin >> str;
    str = check(str);
    cout << str;
}
