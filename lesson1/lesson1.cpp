//
// Main File of first chapter
//

#include "iostream"
#include "lesson1/task_1.cpp"
#include "lesson1/task_2.cpp"
#include "lesson1/task_3.cpp"
#include "lesson1/task_4.cpp"
#include "lesson1/task_5.cpp"
#include "lesson1/task_6.cpp"
#include "lesson1/task_7.cpp"

void printDevider()
{
    cout << "=============================" << endl;
}

void lesson1() {
    using namespace std;

    cout << "Welcome to completed tasks of second chapter :)" << endl;
    printDevider();
    bool exit = false;

    while (!exit) {
        cout << "Select task (1-7) or enter 0 for return to chapter select: ";
        int input;
        cin >> input;
        switch (input) {
            case 0:
                exit = true;
                break;
            case 1:
                printDevider();
                cout << "\nTask number 1\n" << endl;
                lesson1Task1();
                printDevider();
                cin.get();
                break;
            case 2:
                printDevider();
                cout << "\nTask number 2\n" << endl;
                lesson1Task2();
                printDevider();
                cin.get();
                break;
            case 3:
                printDevider();
                cout << "\nTask number 3\n" << endl;
                lesson1Task3();
                printDevider();
                cin.get();
                break;
            case 4:
                printDevider();
                cout << "\nTask number 4\n" << endl;
                lesson1Task4();
                printDevider();
                cin.get();
                break;
            case 5:
                printDevider();
                cout << "\nTask number 5\n" << endl;
                lesson1Task5();
                printDevider();
                cin.get();
                break;
            case 6:
                printDevider();
                cout << "\nTask number 6\n" << endl;
                lesson1Task6();
                printDevider();
                cin.get();
                break;
            case 7:
                printDevider();
                cout << "\nTask number 7\n" << endl;
                lesson1Task7();
                printDevider();
                cin.get();
                break;
            default:
                cout << "Invalid command :( \nPlease try again" << endl;
                break;
        }
    }
}