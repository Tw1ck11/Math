// Math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /////////TASK 1
    double number;

    cout << "Enter the fractional number: ";
    cin >> number;

    number = round(number * 100) / 100;
    cout << "The rounded number is: " << number << endl;

    //////////TASK 2
    int debtors, passed_students;
    double percent_of_debtors;

    cout << "Enter the number of debtors: ";
    cin >> debtors;
    cout << "The number of students who passed HT ";
    cin >> passed_students;

    percent_of_debtors = ((double)debtors / (debtors + passed_students)) * 100;
    percent_of_debtors = round(percent_of_debtors * 100) / 100;

    cout << percent_of_debtors << "% of students didn`t pass their homework" << endl;

    ////////TASK 3
    double past_seconds;
    int hours, mins, secs, remaining_seconds;

    cout << "Enter the number of seconds that have passed since the start of the day: ";
    cin >> past_seconds;

    remaining_seconds = 86400 - past_seconds;

    hours = (remaining_seconds - remaining_seconds % 3600) / 3600;
    mins = (remaining_seconds - remaining_seconds % 60) / 60 - hours * 60;
    secs = remaining_seconds - mins * 60 - hours * 3600;

    cout << hours << " hours " << mins << " minutes " << secs << " seconds left until midnight" << endl;

    /////////TASK 4
    double sum, interest_rate, end_sum;
    int months;

    cout << "Enter the amount in hrivnia: ";
    cin >> sum;
    cout << "Enter the term of the deposit im months: ";
    cin >> months;
    cout << "Enter the interest rate for the year: ";
    cin >> interest_rate;

    end_sum = sum + sum * interest_rate * months / 12 / 100;
    cout << "After " << months << " months you will receive " << end_sum << " hrivnia" << endl;

    /////////TASK 5
    float equatorial_radius = 6378.1, polar_radius = 6356.8;
    const float p = 1.6025;
    const double pi = 3.141592653589793;
    long long S;

    S = 4 * pi * pow((pow(equatorial_radius, p) * pow(equatorial_radius, p) / 3 + 2 * pow(polar_radius, p) * pow(equatorial_radius, p) / 3), 1 / p);
    cout << "The surface area of the Earth is equal to " << S << " km^2" << endl;
}
