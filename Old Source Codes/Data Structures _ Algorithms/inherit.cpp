#include <bits/stdc++.h>

using namespace std;

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

signed main() {
    
    /* B b;
    b.print(); */
 
    /* R p;
    p.Print();
    p.InfoPrint(); */

    /* V print;
    print.PrintInfo0();
    print.PrintInfo(); */

    H key;
    key.A();
    key.B();
    key.C();
    key.D();

    return 0;
}