#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string day;
    cout << "Enter a day (e.g., mon, tue, wed): ";
    cin >> day;

    // Convert input to lowercase
    for (int i = 0; i < day.length(); i++) {
        day[i] = tolower(day[i]);
    }

    // Map day to a number (Mon = 1, Tue = 2, ...)
    if (day == "mon" || day == "monday") cout<<"Color is Violet";
    else if (day == "tue" || day == "tuesday") cout<<"Color is Indigo";
    else if (day == "wed" || day == "wednesday")cout<<"Color is Blue" ;
    else if (day == "thu" || day == "thursday")cout<<"Color is Green" ;
    else if (day == "fri" || day == "friday") cout<<"Color is Yellow";
    else if (day == "sat" || day == "saturday") cout<<"Color is Orange";
    else if (day == "sun" || day == "sunday") cout<<"Color is Red";
    else {
        cout << "Invalid day!" << endl;
        return 0;
}
    
}
