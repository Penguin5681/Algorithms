#include <bits/stdc++.h>

typedef std::string txt;

class Student{
    private:
        txt Name;
        int Age;
        txt Gender;

    public:
        void SetDetails(txt N, int A, txt G) {      // Setter Function
            Name = N;
            Age = A;
            Gender = G;
        }

        Student() {
            std::cout << "Default\n";
        }

        Student(Student &a) {           // Copy Constructor
            Name = a.Name;
            Age = a.Age;
            Gender = a.Gender;
        }

        ~Student () {                   // Destructor
            std::cout << "Destructor Called ;)\n";
        }

        void GetDetails() {                         // Getter Function
            std::cout << "Name is: " << Name << '\n';
            std::cout << "Age is: " << Age << '\n';
            std::cout << "Gender is: " << Gender << '\n';
        }

        bool operator == (Student &a) {
            if (Name == a.Name and Age == a.Age and Gender == a.Gender) {
                return true;
            }
                return false;
        }

};

signed main(void) {

    Student student1;
    student1.SetDetails("Pranav", 19, "Male");      // cSpell:ignore Pranav, Swayam

    Student student2;
    student2.SetDetails("Tanisha", 18, "Female");

    Student student3;
/*     student3.SetDetails("Swayam", 18, "Male"); */
    student3 = student1;
    
    /* student1.GetDetails();
    student2.GetDetails();
    student3.GetDetails();
 */
    if (student1 == student3) {
        std::cout << "They Are same\n";
    }
    else { 
        std::cout << "Not Same\n";
    }

    return 0;
}