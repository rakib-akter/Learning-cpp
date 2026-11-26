#include <iostream>

//cout is used to print the output to the console
//cin is used to take input from the user

int main(){
    std::string name;
    std::cout << "Enter you name: ";
    std::cin >> name;

    std::cout << "Hello " << name << std::endl;

    return 0;
}