#include<iostream>
#include<regex>
#include<string>

int main(int argv,char** argc)
{
        if (argv != 3) {

                std::cout << "\n";
                std::cout << "Unexpected number of arguments!" << "\n";
                std::cout << "Program is expected to be invoked as ./<pgmname> <pattern> <string>" << "\n";
                std::cout << "\n";
                return 1;
        }

        if (regex_match(argc[2],std::regex(argc[1]))) {

                std::cout << "Match found!" << "\n";
        }
        else {
                std::cout << "Match NOT found!" << "\n";
        }

        return 0;
}

