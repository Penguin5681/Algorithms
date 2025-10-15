#include <bits/stdc++.h>

class Base{
    public:
       virtual void Print() {
            std::cout << "This is the base class's print func()\n";
        }
        virtual void Display() {
            std::cout << "This is the base class's display func()\n";
        }
};

class Derived : public Base {
    public:
        void Print() {
            std::cout << "This is the derived class's print func()\n";
        }
        void Display() {
            std::cout << "This is the derived class's display func()\n";
        }
};

signed main(void) {

    Base *baseptr;
    Derived D;
    baseptr = &D;

    baseptr -> Print();
    baseptr -> Display();

}