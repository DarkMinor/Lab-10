#include <iostream>
using namespace std;
int main() {
    //Визначаємо кількість секунд у кожному критерію
    int seconds_in_minute = 60;
    int seconds_in_hour = 60 * seconds_in_minute;
    int seconds_in_day = 24 * seconds_in_hour;
    int seconds_in_week = 7 * seconds_in_day;
    int seconds_in_year = 365 * seconds_in_day;
    //Виводимо
    cout << "In one day," << seconds_in_day << ",seconds" << endl;
    cout << "In one week," << seconds_in_week << ",seconds" << endl;
    cout << "In one year," << seconds_in_year << ",seconds" << endl;

    return 0;

}