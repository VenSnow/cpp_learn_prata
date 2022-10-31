//
/*
 * Напишите программу, которая запрашивает расход бензина в европейском
 * стиле (количество литров на 100 км) и преобразует его в стиль, принятый в
 * США — число миль на галлон. Обратите внимание, что кроме использования
 * других единиц измерений, принятый в США подход (расстояние/топливо)
 * противоположен европейскому (топливо/расстояние). Учтите, что 100
 * километров соответствуют 62.14 милям, а 1 галлон составляет 3.875 литра. Таким
 * образом, 19 миль на галлон примерно равно 12.4 литров на 100 км, а 27 миль на
 * галлон — примерно 8.7 литров на 100 км.
 */
//

void task7()
{
    using namespace std;

    const double kmInMile = 1.609;
    const double litersInGallons = 3.875;

    cout << "Enter spent gasoline in liter per 100 kilometers: ";
    double gasoline;
    cin >> gasoline;

    double miles = 100 / kmInMile;
    double gallons = gasoline / litersInGallons;

    double gasolinePerHundredMiles = gallons / miles;

    cout << "You spent " << gasolinePerHundredMiles << " gallons per 100 miles";
}
