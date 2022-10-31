//
// Main file for all project
//
#include "iostream"
#include "lesson1/lesson1.cpp"
#include "lesson2/lesson2.cpp"
using namespace std;

int main()
{
    cout << "Welcome to Main Menu of program" << endl;
    bool exit = false;

    while (!exit)
    {
        cout << "Select chapter(1-2) or enter 0 for exit: ";
        int input;
        cin >> input;
        switch (input) {
            case 0:
                exit = true;
                break;
            case 1:
                lesson1();
            case 2:
                lesson2();
            default:
                cout << "Invalid command :( \nPlease try again" << endl;
        }
    }
    cout << "Thanks for visit! \nGoodBye!" << endl;
    return 0;
}

