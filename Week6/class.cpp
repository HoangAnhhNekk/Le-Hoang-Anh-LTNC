#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;

    public:
      
        void set_age(int a) {
            age = a;
        }

        void set_first_name(string fn) {
            first_name = fn;
        }

        void set_last_name(string ln) {
            last_name = ln;
        }

        void set_standard(int std) {
            standard = std;
        }


        int get_age() {
            return age;
        }

        string get_first_name() {
            return first_name;
        }

        string get_last_name() {
            return last_name;
        }

        int get_standard() {
            return standard;
        }

        string to_string() {
            stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
    Student st;
    
    int age;
    string first_name, last_name;
    int standard;


    cin >> age >> first_name >> last_name >> standard;


    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout << endl;
    cout << st.to_string() << endl;

    return 0;
}
