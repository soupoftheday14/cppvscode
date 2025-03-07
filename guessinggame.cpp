#include <iostream> 
#include <random>
#include <cstdlib> 

int main () {

    srand(time(0)); 

    int thenumber = 0;

    thenumber = rand() % 100 + 1;


    
    
    int guess;

    std::cout << "Hello, Im thinking of a number from 1 to 100, can you guess what it is?" << thenumber <<std::endl;
    
    while (guess != thenumber) {
        
   
    
    std::cin >> guess;

    if (guess == thenumber){
        std::cout << "Great Job! " << thenumber << " was the number I was thinking of" << std::endl;
        return 0;
    } else if (guess > thenumber){
        std::cout << "Not quite " << guess << " is bigger than the number I was thinking of, try again." << std::endl;
    } else if (guess < thenumber){
        std::cout << "Not quite " << guess << " is smaller than the number I was thinking of, try again." << std::endl;
    } else {
        std::cout << "That is not a valid quess, try again" << std::endl;
    }
    
    }

}