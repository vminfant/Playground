#include<iostream>
#include<typeinfo>

int main() {

        char a = '0';

        // Arithmetic operation
        std::cout << typeid(a+20).name() << "\n";
        std::cout << a + 20 << "\t" << "\"" << static_cast<char>(a+20) << "\"" << "\n";

        return 0;
}
