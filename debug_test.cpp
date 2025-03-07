#include <iostream>

int main() {
    int x = 10;  // Set a breakpoint here
    int y = 20;
    int sum = x + y;  // Another good place for a breakpoint
    std::cout << "Sum: " << sum << std::endl;

    for (int i = 0; i < 5; i++) {  // Break inside the loop
        std::cout << "Loop iteration: " << i << std::endl;
    }

    return 0;
}
