//
/*
 * Напишите программу, которая предлагает пользователю ввести свой возраст.
 * Затем программа должна отобразить возраст в месяцах:
 * Enter your age: 29
 * Your age in months is 348.
 */
//

#include "iostream"

int getAgeInMonth(int age)
{
    return age * 12;
}

int task4()
{
    using namespace std;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age in months is " << getAgeInMonth(age) << endl;
    return 0;
}
