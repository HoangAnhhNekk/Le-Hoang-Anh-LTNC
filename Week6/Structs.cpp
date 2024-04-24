#include <iostream>
using namespace std;
struct Student
{
   int age;
   string first_name;
   string last_name;
   int gpa;
};

int main()
{
    Student s1;
    cin >> s1.age;
    cin >> s1.first_name;
    cin >> s1.last_name;
    cin >> s1.gpa;

    cout << s1.age <<" "<<s1.first_name<<" "<<s1.last_name<<" "<<s1.gpa;
}
