//
/*
 * Напишите программу, которая запрашивает количество секунд в виде целого
 * значения (используйте тип long или long long, если последний доступен) и
 * затем отображает эквивалентное значение в сутках, часах, минутах и секундах.
 * Для представления количества часов в сутках, количества минут в часе и
 * количества секунд в минуте используйте символические константы. Результат
 * выполнения программы должен выглядеть следующим образом:
 * Enter the number of seconds: 31600000
 * 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
 */
//

void task4()
{
    using namespace std;

    int const secondsInMinutes = 60;
    int const minutesInHours = 60;
    int const hoursInDays = 24;

    cout << "Enter the number of seconds: ";
    long long totalSeconds;
    cin >> totalSeconds;

    int finalDays = int(totalSeconds / secondsInMinutes / minutesInHours / hoursInDays);
    int totalHoursInDays = finalDays * hoursInDays;
    int finalHours = int(totalSeconds / secondsInMinutes / minutesInHours) - totalHoursInDays;
    int totalMinutesInDays = (finalHours * minutesInHours) +
            (totalHoursInDays * minutesInHours);
    int finalMinutes = int(totalSeconds / secondsInMinutes) - totalMinutesInDays;
    int totalSecondsInDays = (finalDays * hoursInDays * minutesInHours * secondsInMinutes) +
            (finalHours * minutesInHours * secondsInMinutes) +
            (finalMinutes * secondsInMinutes);
    int finalSeconds = int(totalSeconds - totalSecondsInDays);

    cout << totalSeconds << " seconds = ";
    cout << finalDays << " days, ";
    cout << finalHours << " hours, ";
    cout << finalMinutes << " minutes, ";
    cout << finalSeconds << " seconds" << endl;
}
