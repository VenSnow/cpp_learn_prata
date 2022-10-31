//
// Main File
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

int main()
{
    using namespace std;

    printDevider();
    cout << "\nTask number 1\n" << endl;
    task1();
    printDevider();

    printDevider();
    cout << "\nTask number 2\n" << endl;
    task2();
    printDevider();

    printDevider();
    cout << "\nTask number 3\n" << endl;
    task3();
    printDevider();

    printDevider();
    cout << "\nTask number 4\n" << endl;
    task4();
    printDevider();

    printDevider();
    cout << "\nTask number 5\n" << endl;
    task5();
    printDevider();

    printDevider();
    cout << "\nTask number 6\n" << endl;
    task6();
    printDevider();

    printDevider();
    cout << "\nTask number 7\n" << endl;
    task7();
    printDevider();
}