//
/*
 * Напишите программу на C++, которая выдает запрос на ввод расстояния в фарлонгах
 * и преобразует его в ярды. (Один фарлонг равен 220 ярдам, или 201168 м.)
 */
//

#include "iostream"

double getFarlongsInYards(double distance)
{
    return distance * 220;
}

void lesson1Task2()
{
    using namespace std;
    cout << "Enter distance in furlongs: ";
    double distance;
    cin >> distance;
    cout << "\nDistance in yards is " << getFarlongsInYards(distance) << endl;
    cout << "\n" << endl;
}