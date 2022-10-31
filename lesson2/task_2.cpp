//
/*
 * Напишите короткую программу, которая запрашивает рост в футах и дюймах и
 * вес в фунтах. (Для хранения этой информации используйте три переменных.)
 * Программа должна выдать индекс массы тела (body mass index — ВМІ). Чтобы
 * рассчитать ВМІ, сначала преобразуйте рост в футах и дюймах в рост в дюймах
 * (1 фут =12 дюймов). Затем преобразуйте рост в дюймах в рост в метрах,
 * умножив на 0.0254. Далее преобразуйте вес в фунтах в массу в килограммах,
 * разделив на 2.2. После этого рассчитайте ВМІ, разделив массу в килограммах на
 * квадрат роста в метрах. Для представления различных коэффициентов
 * преобразования используйте символические константы.
 */
//

void task2()
{
    using namespace std;
    const double inchInFoot = 12.0;
    const double inchInMeter = 0.0254;
    const double poundsInKilo = 2.2;
    cout << "Enter your foot height: ";
    int footHeight;
    cin >> footHeight;

    cout << "Enter your inch height: ";
    int inchHeight;
    cin >> inchHeight;

    cout << "Enter your weight in pounds: ";
    int poundsWeight;
    cin >> poundsWeight;

    double totalInches = footHeight * inchInFoot + inchHeight;
    double heightInMeter = totalInches * inchInMeter;

    double weightInKilo = poundsWeight / poundsInKilo;

    double bmi = weightInKilo / (heightInMeter * heightInMeter);

    cout << "Your bmi is " << bmi << endl;
}