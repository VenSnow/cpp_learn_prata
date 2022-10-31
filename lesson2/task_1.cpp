//
/*
 * Напишите короткую программу, которая запрашивает рост в дюймах и
 * преобразует их в футы и дюймы. Программа должна использовать символ
 * подчеркивания для обозначения позиции, где будет производиться ввод. Для
 * представления коэффициента преобразования используйте символьную константу const.
 */
//

void lesson2Task1()
{
    using namespace std;
    const int inchInFoot = 12;
    cout << "Enter your height in inch: ";
    int height;
    cin >> height;

    int footHeight = height / inchInFoot;
    int inchHeight = (int)footHeight % inchInFoot;

    cout << "Your height: " << footHeight << " foot " << inchHeight << " inch" << endl;
    cout << "\n" << endl;
}