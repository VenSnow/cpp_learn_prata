//
/*
 * Напишите программу, которая запрашивает количество миль, пройденных
 * автомобилем, и количество галлонов израсходованного бензина, а затем
 * сообщает значение количества миль на галлон. Или, если хотите, программа может
 * запрашивать расстояние в километрах, а объем бензина в литрах, и выдавать
 * результат в виде количества литров на 100 километров.
 */
//

void task6()
{
    using namespace std;

    cout << "Enter distance in km: ";
    double distance;
    cin >> distance;

    cout << "Enter spent gasoline in liter: ";
    double gasoline;
    cin >> gasoline;

    double gasolinePerHundredKilometers = gasoline / distance * 100;

    cout << "You spent " << gasolinePerHundredKilometers << " liters of gasoline per 100 kilometers" << endl;
}