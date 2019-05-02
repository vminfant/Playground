#include<iostream>

int main(void) {

        int a1 = 1;
        int* p1 = &a1;
        int* p2 = nullptr;
        bool b1 = p1;
        bool b2 = p2;
        bool b3 {p1}; 		  // Using {} initializer syntax
        bool b4 {p2};
        bool b5 {p1 != nullptr};  // Using {} initializer syntax - Explicit conversion
        bool b6 {p2 != nullptr};

        std::cout << "b1 : " << b1 << "\n";
        std::cout << "b2 : " << b2 << "\n";
        std::cout << "b3 : " << b3 << "\n";
        std::cout << "b4 : " << b4 << "\n";
        std::cout << "b5 : " << b5 << "\n";
        std::cout << "b6 : " << b6 << "\n";

        return 0;
}
