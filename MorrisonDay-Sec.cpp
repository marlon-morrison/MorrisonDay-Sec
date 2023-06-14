#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int num1;
    int days;
    int seconds;
    int hours;
    int minutes; 

    cout << "Which one will you pick 1 or 2?"<< endl; 
    cout << "1)Convert the number of seconds into days." << endl;
    cout << "2)Convert the number of days into seconds." << endl;
    cin >> num1;

    if (num1 == 2) {
        cout << "Enter the amount of days you will like to convert into seconds." << endl; 
        cin >> days;
        seconds = 86400 * days;
        cout << days << " days will convert into " << seconds << " seconds." << endl; 
    } else {
        cout << "Enter the amount of seconds you will like to convert into days."<< endl;
        cin >> seconds;
        if (seconds >= 86400) {
            days = seconds / 86400;
            cout << seconds << " seconds will convert into " << days << " days." << endl; 
        } else if (seconds < 86400 && seconds >= 3600) {
            hours = seconds / 3600;
            cout << seconds << " seconds will convert into " << hours << " hours." << endl; 
        } else if (seconds < 3600 && seconds >= 60){
            minutes = seconds / 60;
            cout << seconds << " seconds will convert into " << minutes << " minutes." << endl;
        };
    };
    return 0;
}