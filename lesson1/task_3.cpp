//
/*
 * Напишите программу на C++, которая использует три определяемых
 * пользователем функции (включая main ()) и генерирует следующий вывод:
 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run
 * Одна функция, вызываемая два раза, должна генерировать первые две строки,
 * а другая, также вызываемая два раза — оставшиеся строки.
 */
//

#include "iostream"
using namespace std;

void generateFirstSentence()
{
    cout << "Three blind mice" << endl;
}

void generateSecondSentence()
{
    cout << "See how they run" << endl;
}

int main()
{
    generateFirstSentence();
    generateFirstSentence();
    generateSecondSentence();
    generateSecondSentence();
    return 0;
}