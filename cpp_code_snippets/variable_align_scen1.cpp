#include<iostream>
#include<ios>

int main() {

        int x1 = 1;
        char c1 = 'a';
        int x2 = 2;
        char c2 = 'b';
        int x3 = 3;
        char c3 = 'c';

        std::cout << "size:" << sizeof(c3) << "\t" << "align:" << alignof(c3) << "\n";
        std::cout << "size:" << sizeof(x3) << "\t" << "align:" << alignof(x3) << "\n";
        std::cout << "size:" << sizeof(c2) << "\t" << "align:" << alignof(c2) << "\n";
        std::cout << "size:" << sizeof(x2) << "\t" << "align:" << alignof(x2) << "\n";
        std::cout << "size:" << sizeof(c1) << "\t" << "align:" << alignof(c1) << "\n";
        std::cout << "size:" << sizeof(x1) << "\t" << "align:" << alignof(x1) << "\n";
        std::cout << "c3:\t" << c3 << "\t" << (int*) &c3 << "\n";
        std::cout << "x3:\t" << x3 << "\t" << &x3 << "\n";
        std::cout << "c2:\t" << c2 << "\t" << (int*) &c2 << "\n";
        std::cout << "x2:\t" << x2 << "\t" << &x2 << "\n";
        std::cout << "c1:\t" << c1 << "\t" << (int*) &c1 << "\n";
        std::cout << "x1:\t" << x1 << "\t" << &x1 << "\n";

        return 0;
}
