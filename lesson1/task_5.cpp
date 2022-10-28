//
/*
 *Напишите программу, в которой функция main() вызывает определяемую
 * пользователем функцию, принимающую в качестве аргумента значение
 * температуры по Цельсию и возвращающую эквивалентное значение температуры по
 * Фаренгейту. Программа должна выдать запрос на ввод значения по Цельсию и
 * отобразить следующий результат:
 * Please enter a Celsius value: 20
 * 20 degrees Celsius is 68 degrees Fahrenheit.
 * Вот формула для этого преобразования:
 * Температура в градусах по Фаренгейту =
 * 1,8 * Температура в градусах по Цельсию + 32
 */
//

#include "iostream"

double transformToFahrenheit(double temp)
{
    return 1.8 * temp + 32;
}

int task5()
{
    using namespace std;
    cout << "Please enter a Celsius value: ";
    double temp;
    cin >> temp;
    cout << temp << "degrees Celsius is " << transformToFahrenheit(temp) << " degrees Fahrenheit";
    return 0;
}

