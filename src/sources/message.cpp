#include "message.h"

void gameHeader()
{
    cout << endl << "------ BULLS AND COWS GAME ------" << endl << endl;
    cout << "          }   {         ___ " << endl;
    cout << "          (o o)        (o o) " << endl;
    cout << "   /-------\\ /          \\ /-------\\ " << endl;
    cout << "  / | BULL |O            O| COW  | \\ " << endl;
    cout << " *  |-,--- |              |------|  * " << endl;
    cout << "    ^      ^              ^      ^ " << endl;
}

void mainMenu()
{
    cout << endl << "[1] Start game";
    cout << endl << "[2] Game rules";
    cout << endl << "[3] Credits";
    cout << endl << "[4] Options";
    cout << endl << "[0] Exit";
    cout << endl << ">";
}

void gameOptionsMenu(int lengthNum, int maxAttempt)
{
    cout << endl << "[1] Length number " << lengthNum << ". Replace?";

    if (maxAttempt > 0) {
        cout << endl << "[2] Max attempt " << maxAttempt << ". Replace?";
    } else {
        cout << endl
             << "[2] Max attempt infinity"
             << ". Replace?";
    }

    cout << endl << "[3] Return to main menu";
    cout << endl << ">";
}

void invalidInput()
{
    cout << endl << "Invalid input" << endl;
}

void goodbye()
{
    cout << endl << "Goodbye" << endl;
}

void congratulate(int hiddenNum)
{
    cout << endl
         << "Congratulate. You've won. The hidden number " << hiddenNum << "!"
         << endl;
}

void gameRules()
{
    cout << endl << "Bulls and cows is a logic game.";
    cout << endl << "It is necessary to guess the hidden number.";
    cout << endl
         << "Bull - number of digits that are in the hidden number and that "
            "are in the same position as in the given number.";
    cout << endl
         << "Cows - number of digits that are present in the hidden number."
         << endl;
}

void gameCredits()
{
    cout << endl << "Programmer: Daniil Nikolaev";
    cout << endl << "Designer: Daniil Nikolaev";
    cout << endl << "Tester: Daniil Nikolaev";
    cout << endl << "Producer: Daniil Nikolaev" << endl;
}

void replaceLengthNum()
{
    cout << endl << "Enter new length number >";
}

void resultAttempt(int bulls, int cows)
{
    cout << endl;
    cout << "          }   {         ___ " << endl;
    cout << "          (o o)        (o o) " << endl;
    cout << "   /-------\\ /          \\ /-------\\ " << endl;
    cout << "  / | BULL |O            O| COW  | \\ " << endl;
    cout << " *  |-,--- |              |------|  * " << endl;
    cout << "    ^      ^              ^      ^ " << endl;
    cout << "\t" << bulls << "\t\t     " << cows << endl;
}

void inputNumber(int currentAttempt, int maxAttempt)
{
    if (maxAttempt > 0) {
        cout << endl
             << "(" << currentAttempt << "-" << maxAttempt
             << ") Input number (0 - exit) > ";
    } else {
        cout << endl << "(" << currentAttempt << ") Input number (0 - exit) > ";
    }
}

void invalidAnswerInput(int min, int max)
{
    cout << endl
         << "You need to enter a number from " << min << " to " << max << "!";
    cout << endl << "Try again >";
}

void lostGame()
{
    cout << endl << "You lost!" << endl;
}

void replaceMaxAttempt()
{
    cout << endl
         << "Enter new max attempt (enter number less 0 for infinity attempt) "
            ">";
}