#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seeding random number generator
    srand(time(nullptr)); 

// Generation Random number ..
int secretNumber = rand() % 100 + 1; 
int guess;
int attempts = 0;

    std::cout << "Hey!! Welcome to the Number Guessing Game! \n";
    std::cout << "We have selected a number.Can you guess  it between 1 to 100? \n";

    do {
       std:: cout << "Enter your guess number: ";
       std:: cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again.. \n";
        } else if (guess < secretNumber) {
            std::cout << "oops Too low! Try again.\n";
        } else {
           std:: cout << " Congratulations! You Won !!  (" << secretNumber << ") in " << attempts << " attempts you have done! \n";
        }
    } while (guess != secretNumber);

    return 0;
}