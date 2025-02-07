#include <iostream>
#include <string>

int main() {
    srd::string name;

    std::cout << "Enter the name: ";
    std::getline(srd::cin, name);

    std::cout << "Hello...!" << name << std:endl;

    return 0;
}
