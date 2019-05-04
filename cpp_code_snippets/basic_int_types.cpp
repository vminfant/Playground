#include<iostream>
#include<cstdint>
#include<typeinfo>

int main(void) {

	short is;
	int i;
	long il;

	std::cout << "short:\t" << typeid(is).name() << ":\t" << sizeof(is) << "\n";
        std::cout << "int:\t" << typeid(i).name() << ":\t" << sizeof(i) << "\n";
        std::cout << "long:\t" << typeid(il).name() << ":\t" << sizeof(il) << "\n";

	return 0;
}
