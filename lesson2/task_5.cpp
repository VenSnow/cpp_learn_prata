//
/*
 * Напишите программу, которая запрашивает текущую численность населения
 * Земли и текущую численность населения США (или любой другой страны).
 * Сохраните эту информацию в переменных типа long long. В качестве
 * результата программа должна отображать процентное соотношение численности
 * населения США (или выбранной страны) и всего мира. Результат выполнения
 * программы должен выглядеть следующим образом:
 * Enter the world's population: 6898758899
 * Enter the population of the US: 310783781
 * The population of the US is 4.50492% of the world population.
 * Можете поискать в Интернете более точные значения.
 */
//

void lesson2Task5()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "Enter the world's population: ";
    unsigned long long worldPopulation;
    cin >> worldPopulation;

    cout << "Enter the population of the US: ";
    unsigned long long usPopulation;
    cin >> usPopulation;

    long double percentOfWorldPopulation = (double(usPopulation) / (worldPopulation / 100));

    cout << "The population of the US is " << percentOfWorldPopulation <<"% of the world population." << endl;
    cout << "\n" << endl;
}

