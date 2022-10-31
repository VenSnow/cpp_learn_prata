//
/*
 * Напишите программу, которая запрашивает широту в градусах, минутах и
 * секундах, после чего отображает широту в десятичном формате. В одной минуте
 * 60 угловых секунд, а в одном градусе 60 угловых минут; представьте эти
 * значения с помощью символических констант. Для каждого вводимого значения
 * должна использоваться отдельная переменная. Результат выполнения
 * программы должен выглядеть следующим образом:
 * Enter a latitude in degrees, minutes, and seconds:
 * First, enter the degrees: 37
 * Next, enter the minutes of arc: 51
 * Finally, enter the seconds of arc: 19
 * 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
 */
//

void lesson2Task3()
{
    using namespace std;
    double const arcSecondsInArcMinute = 60;
    double const arcMinuteInDegree = 60;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;

    cout << "First, enter the degrees: ";
    double degrees;
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ";
    double arcMinutes;
    cin >> arcMinutes;

    cout << "Finally, enter the seconds of arc: ";
    double arcSeconds;
    cin >> arcSeconds;

    double totalArcSeconds = arcMinutes * arcSecondsInArcMinute + arcSeconds;

    double widthInDegrees = degrees + totalArcSeconds / arcSecondsInArcMinute / arcMinuteInDegree;

    cout << degrees << " degrees ";
    cout << arcMinutes << " minutes ";
    cout << arcSeconds << " seconds = " << widthInDegrees << " degrees" << endl;
    cout << "\n" << endl;
}

