#include <bits/stdc++.h>

using namespace std;
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

signed main(void) {

    Complex c1(12, 7), c2(5, 9);
    Complex c3 = c1 + c2;
    c3.show();

    return 0;
}