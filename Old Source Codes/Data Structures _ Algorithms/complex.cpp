#include <bits/stdc++.h>

class Complex {
    private:
        int real; int img;
    public:
        Complex(int r = 0, int i = 0) {
            real = r;
            img = i;
        }

        Complex operator + (Complex const &obj) {
            Complex rsl;
            rsl.img = img + obj.img;
            rsl.real = real + obj.real;
        }

        void Display() {
            std::cout << real << " + i" << img << std::endl; 
        } 
};

signed main(void) {

    Complex c1(9, 11), c2(5, 12);
    Complex c3 = c1 + c2;
    c3.Display();

    return 0;
}