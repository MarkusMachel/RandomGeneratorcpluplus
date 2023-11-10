#include <iostream>
#include <string>
#include <ctime>

int main() {
    // pseudo random number generator
    srand(time(NULL)); // seed is a number that is used to initialize a random number generator
    int randomNum1 = rand() % 6 + 1; //random number between 1 and 6
    int randomNum2 = rand() % 6 + 1; //random number between 1 and 6
    int randomNum3 = rand() % 6 + 1; //random number between 1 and 6

    std::cout << "Dice rolled: " << randomNum1 << std::endl;
    std::cout << "Dice rolled: " << randomNum2 << std::endl;
    std::cout << "Dice rolled: " << randomNum3 << std::endl;

    //random events in a game
    int randNum = rand() %5 + 1; //random number between 1 and 5

    switch (randNum)
    {
        case 1:
            std::cout << "You win a bumper sticker!" << std::endl;
            break;
        case 2:
            std::cout << "You win a t-shirt!" << std::endl;
            break;
        case 3:
            std::cout << "You win a hat!" << std::endl;
            break;
        case 4:
            std::cout << "You win a mug!" << std::endl;
            break;
        case 5:
            std::cout << "You win a car!" << std::endl;
            break;
        default:
            break;
    }

    int num;
    int guess;
    /* int tries; 
    When you declare a variable in C++ without explicitly initializing it, its initial value is undefined. 
    It can contain any arbitrary value that happens to be in that memory location, which may not be 0 or any other "safe" value. */

    int tries = 0; //initialize tries to 0

    num = rand() % 100 + 1; //random number between 1 and 100

    std::cout << "Guess My Number Game\n\n";

    do {
        std::cout << "Enter a guess between 1 and 100 : ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high!\n";
        }
        else if (guess < num) {
            std::cout << "Too low!\n";
        }
        else {
            std::cout << "\nCorrect! You got it in " << tries << " guesses!\n";
        }

    } while(guess != num);

    return 0;
}