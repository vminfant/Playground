#include<iostream>

class Distance {
        long double dist;
        public:
                Distance(long double val) : dist{val} {};
                void print_dist() {
                        std::cout << "Distance : " << dist << "\n";
                }

};

// User defined literal operator
Distance operator "" _km(long double d) {

        return Distance(d);
}


int main() {

        Distance d1 = 1.23_km;

        d1.print_dist();

        Distance* a1=&d1;
        std::cout << sizeof(d1) << "\n";

        return 0;

}
