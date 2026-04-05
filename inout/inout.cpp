#include <iostream>

    // cout << (insertion operator)
    // cin >> (extraction operator)
int main(){
    std:: string name;
    int age;
    std:: string fullName;

    std::cout << "whats your name? "; 
    std::cin >> name; // stops taking input at the first white space

    std::cout << "whats your age? ";
    std::cin >> age;
    std::cout << "hello " << name << " you are " << age << " years old" << '\n';

    std::cout << "whats your full name? "; 
    std::getline(std::cin >> std::ws, fullName); // takes an entire line of input
    std::cout << "so youre called that way do you? " << fullName << '\n';



    return 0;
}