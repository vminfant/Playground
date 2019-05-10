#include<iostream>
#include<memory>
#include<ios>

struct S1 {

        char c1;
        int d1;
        char c2;
        int d2;
        void set_default() {

                c1 = 'a';
                c2 = 'b';
                d1 = 1;
                d2 = 2;
        }
        void print() {


                std::cout << "size:" << sizeof(c1) << "\t" << "align:" << alignof(c1) << "\n";
                std::cout << "c1:\t" << c1 << "\t" << (int*) &c1 << "\n";
                std::cout << "size:" << sizeof(d1) << "\t" << "align:" << alignof(d1) << "\n";
                std::cout << "d1:\t" << d1 << "\t" << &d1 << "\n";
                std::cout << "size:" << sizeof(c2) << "\t" << "align:" << alignof(c2) << "\n";
                std::cout << "c2:\t" << c2 << "\t" << (int*) &c2 << "\n";
                std::cout << "size:" << sizeof(d2) << "\t" << "align:" << alignof(d2) << "\n";
                std::cout << "d2:\t" << d2 << "\t" << &d2 << "\n\n";

        }
};

struct S2 {

        char c1;
        char c2;
        int d1;
        int d2;

        void set_default() {

                c1 = 'a';
                c2 = 'b';
                d1 = 1;
                d2 = 2;
        }
        void print() {


                std::cout << "size:" << sizeof(c1) << "\t" << "align:" << alignof(c1) << "\n";
                std::cout << "c1:\t" << c1 << "\t" << (int*) &c1 << "\n";
                std::cout << "size:" << sizeof(c2) << "\t" << "align:" << alignof(c2) << "\n";
                std::cout << "c2:\t" << c2 << "\t" << (int*) &c2 << "\n";
                std::cout << "size:" << sizeof(d1) << "\t" << "align:" << alignof(d1) << "\n";
                std::cout << "d1:\t" << d1 << "\t" << &d1 << "\n";
                std::cout << "size:" << sizeof(d2) << "\t" << "align:" << alignof(d2) << "\n";
                std::cout << "d2:\t" << d2 << "\t" << &d2 << "\n\n";

        }

};

int main() {

        S1 s1 = S1();
        S2 s2 = S2();

        int x1 = 1;
        int x2 = 2;
        alignas(8) int x3 = 3;

        std::cout << "size:" << sizeof(s1) << "\t" << "align:" << alignof(s1) << "\n";
        s1.set_default();
        s1.print();
        std::cout << "size:" << sizeof(s2) << "\t" << "align:" << alignof(s2) << "\n";
        s2.set_default();
        s2.print();

        std::cout << "size:" << sizeof(x1) << "\t" << "align:" << alignof(x1) << "\n";
        std::cout << "size:" << sizeof(x2) << "\t" << "align:" << alignof(x2) << "\n";
        std::cout << "size:" << sizeof(x3) << "\t" << "align:" << alignof(x3) << "\n";
        std::cout << "x1:\t" << x1 << "\t" << &x1 << "\n";
        std::cout << "x2:\t" << x2 << "\t" << &x2 << "\n";
        std::cout << "x3:\t" << x3 << "\t" << &x3 << "\n\n";
        return 0;
}
