#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    srand(std::time (0));
    beginning:
    int random = std::rand();
    int guess;
   
    std::cout << "Try to guess the number I have thought. Please enter a number:\n";
    question:
    std::cin >> guess;

    


    if (guess == random) {
        char yn;
        std::cout << "That's correct! You won! Do you want to play again (Y/N) ? \n";
        std::cin >> yn;
        yn = toupper(yn);
        if (yn == 'Y') {
            int random = std::rand();
            goto beginning;
        }

    }


    else {
        if (guess < random) {
            std::cout << "Nope, try a higher number!\n";
            goto question;
        }
        else {
            std::cout << "Nope, try a lower number!\n";
            goto question;
        }
    }

return 0; 
}
