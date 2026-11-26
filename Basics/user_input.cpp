#include <iostream>

//cout is used to print the output to the console
//cin is used to take input from the user

int main(){
    std::string name;
    int age;

    std::cout << "Enter you name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;
    

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old. " << std::endl;

    return 0;
}