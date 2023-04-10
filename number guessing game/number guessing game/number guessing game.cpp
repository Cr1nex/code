// number guessing game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num;
    int guess;
    int tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout << "********NUMBER GUESSING GAME********\n";
    do{
        std::cout << "Enter a number between 1-100: ";
        std::cin >> guess;
        tries++;
        if (guess > num) {
            std::cout << "Its too high guess again!\n";
        }
        else if(num > guess) {
            std::cout << "Its too low guess again!\n";
        }
        else {
            std::cout << "You've guessed the number Wow what accomplishment(!) and your tries: " << tries <<"\n";
        }
    } while (num != guess);
    std::cout << "**********************************";
    return 0;
}