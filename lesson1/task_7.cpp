//
/*
 * Напишите программу, которая выдает запрос на ввод значений часов и минут.
 * Функция main () должна передать эти два значения функции, имеющей тип
 * void, которая отобразит эти два значения в следующем виде:
 * Enter the number of hours: 9
 * Enter the number of minutes: 28
 * Time: 9:28
 */
//

#include "iostream"

int task7()
{
    using namespace std;
    cout << "Enter the number of hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    int minutes;
    cin >> minutes;
    cout << "Time: " << hours << ":" << minutes << endl;
    return 0;
}