#include <iostream>
#include <string>

int main() {
    // Declare variables
    std::string name;
    int age;

    // Get user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  // Read the full name with spaces

    std::cout << "Enter your age: ";
    std::cin >> age;  // Read the age

    // Perform a basic calculation
    int yearsUntil100 = 100 - age;

    // Output the results
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
    std::cout << "You will turn 100 years old in " << yearsUntil100 << " years." << std::endl;

    return 0;
}