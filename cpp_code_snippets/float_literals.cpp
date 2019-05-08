#include<iostream>
#include<iomanip>

int main() {

        float f1 = 3.14f;
        double f2 = 3.14;
        float f3 = 3.144234324342;
        double f4 = 3.144234324342;
        float f5 {3.144234324342};
        double f6 {3.144234324342};
        auto f7 {3.144234324342};
        auto f8 {3.144234324342L};

        std::cout << 3.14 << "\t:\t" << typeid(3.14).name() << "\n";

        std::cout << f1 << "\t:\t" << typeid(f1).name() << "\t:\t" << sizeof(f1) << "\n";
        std::cout << f2 << "\t:\t" << typeid(f2).name() << "\t:\t" << sizeof(f2) << "\n";
        std::cout << f3 << "\t:\t" << typeid(f3).name() << "\t:\t" << sizeof(f3) << "\n";
        std::cout << f4 << "\t:\t" << typeid(f4).name() << "\t:\t" << sizeof(f4) << "\n";
        std::cout << f5 << "\t:\t" << typeid(f5).name() << "\t:\t" << sizeof(f5) << "\n";
        std::cout << f6 << "\t:\t" << typeid(f6).name() << "\t:\t" << sizeof(f6) << "\n";
        std::cout << f7 << "\t:\t" << typeid(f7).name() << "\t:\t" << sizeof(f7) << "\n";
        std::cout << f8 << "\t:\t" << typeid(f8).name() << "\t:\t" << sizeof(f8) << "\n";
        std::cout << (long double)1111/3 << "\n";
        return 0;
}
