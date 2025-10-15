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

// (Polymorphism) = (Many, forms)
// Polymorphism has two types: Compile Time and Run Time
// Compile Time has further two types: Function Overloading and Operator Overloading
// Run TIme has a type: Virtual Functions

// Function Overloading 

class School {
    public:
        void Print() {
            cout << "No Arguments\n";
        }  
        void Print(int age) {
            cout << "Single Argument\n";
        }
        void Print(double age) {
            cout << "Double Arguments\n";
        }
};

// Operator Overloading 

class Complex {
    private:
        int real, img;
    public:
        Complex(int r = 0, int i = 0) {
            real = r;
            img = i;
        }

        Complex operator + (Complex const &obj) {
            Complex rsl;
            rsl.img = img + obj.img;
            rsl.real = real + obj.real;
            return rsl;
        }

        void show() {
            cout << real << " + i" << img << '\n';
        }
};

// Classes are two types: 
// Derived Class(Child) = The class that inherits from another class
// Base Class(Parent) = The class being inherited from

/* Types of inheritance
    1. Single inheritance
    2. Multiple inheritance
    3. Multi level inheritance
    4. Hybrid Inheritance
    5. Hierarchical Inheritance
*/

// Example 1. Single inheritance

class A {
    public:
        void print() {
            cout << "Single inheritance\n";
        }
};

class B : public A {};

// Example 2. Multiple inheritance

class P {
    public: 
        void Print() {
            cout << "Multiple inheritance (P)\n";
        }
};

class Q {
    public:
        void InfoPrint() {
            cout << "Multiple inheritance (Q)\n";
        }
};

class R : public P, public Q {};

// Example 3. Multi level inheritance

class T {
    public:
        void PrintInfo0() {
            cout << "Multi Level inheritance (T)\n";
        }
};

class U : public T {
    public:
        void PrintInfo() {
            cout << "Multi Level inheritance (U)\n";
        }
};


class V : public U {};

// Example 4. Hybrid Inheritance

class E {
    public:
        void A() {
            cout << "Hybrid Inheritance (E)\n";
        }
};

class F {
    public:
        void B() {
            cout << "Hybrid Inheritance (F)\n";
        }
};

class G : public E, public F {
    public:
        void C() {
            cout << "Hybrid Inheritance (G)\n";
        }
};

class H : public G{
    public:
        void D() {
            cout << "Hybrid Inheritance (H)\n";
        }
};

// Example 5. Hierarchical Inheritance

class I {
    public:
        void I1() {
            cout << "Hierarchical Inheritance (I)\n";
        }
};

class J : public I {
    public:
        void J1() {
            cout << "Hierarchical Inheritance (J)\n";
        }
};

class K : public I {
    public:
        void K1() {
            cout << "Hierarchical Inheritance (K)\n";
        }
};

class L : public J {
    public:
        void J1() {
            cout << "Hierarchical Inheritance (J)\n";
        }
};

class M : public J {
    public: 
        void M1() {
            cout << "Hierarchical Inheritance (M)\n";
        }
};

class N : public K {
    public:
        void N1() {
            cout << "Hierarchical Inheritance (N)\n";
        }
};

class O : public K{
    public:
        void O1() {
            cout << "Hierarchical Inheritance (O)\n";
        }
};

signed main(void) {

    Student a, b;
    a.SetName("Pranav");
    a.age = 19;
    a.Gender = "Male";

    b.SetName("Urvi");
    b.age = 19;
    b.Gender = "Female";

    // if (a == b) 
    //     cout << "SAME";
    // else 
    //     cout << "NOT SAME";
}