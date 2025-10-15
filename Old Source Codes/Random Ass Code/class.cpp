#include <bits/stdc++.h>

using namespace std;

class Student {
    private:
    string name;

    public:
    int age;
    string Gender;

    Student() {                                 // Default Constructor
        cout << "Default Constructor\n";
    }

    Student(string s, int a, string g) {    // Parameterized Constructor;
        name = s;
        age = a;
        Gender = g;
        cout << "Parameterized Constructor\n";
    }

    Student(Student &a) {                           // Copy Constructor
        name = a.name;
        age = a.age;
        Gender = a.Gender;
        cout << "COpy\n";
    }

    ~Student() {
        cout << "Destructor\n";
    }

    void SetName(string s) {       // Setter Function 
        name = s;

    }

    void GetName() {                       // Getter function
        cout << name << endl;
        cout << age << endl;
        cout << Gender << endl;
    }

    void Print() {
         cout << "Name: ";
         cout << name << '\n';
         cout << "Age: ";
         cout << age << endl;
         cout << "Gender: ";
         cout << Gender << endl; 
    }

    bool operator == (Student &a) {                 // Operator Overloading
        if (name == a.name and age == a.age and Gender == a.Gender) {
            return true;
        }
        return false;
    }
};

signed main(void) {
    
    /* Student A;
    A.name = "Pranav";
    A.age = 19;
    A.Gender = true; / */ // True if male else female

    /* Student Arr[3];
        for (int i = 0; i < 3; i++) { 
            string s;
            cout << "Name: ";
            cin >> s;
            Arr[i].SetName(s); 
            cout << "Age: ";
            cin >> Arr[i].age;
            cout << "Gender: ";
            cin >> Arr[i].Gender;
        }

        for (int i = 0; i < 3; i++) {
            Arr[i].Print();
        } */
        Student A("Pranav", 19, "Male");
        /* A.GetName(); */

        Student B("Sinha", 19, "Male");
        Student C = A;

        if (B == A) {
            cout << "Same\n";
        }
        else {
            cout << "Not Same\n";
        }

        return 0;
}