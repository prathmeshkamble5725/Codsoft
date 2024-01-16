#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int randomNumber, guess;

    
    srand(time(0));

    
    randomNumber = rand() % 100 + 1;

    cout << "Guess a number between 1 and 100: ";

   
    while (true) {
        cin >> guess;

        if (guess < randomNumber) {
            cout << "The number you entered is Too low! Guess again: ";
        } else if (guess > randomNumber) {
            cout << "The number you entered is Too high! Guess again: ";
        } else {
            cout << "Congratulations! You guessed the rigt number!" << endl;
            break;
        }
    }

    return 0;
}