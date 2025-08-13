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

    int dayNum = 0;

    // Map day to a number (Mon = 1, Tue = 2, ...)
    if (day == "mon" || day == "monday") dayNum = 1;
    else if (day == "tue" || day == "tuesday") dayNum = 2;
    else if (day == "wed" || day == "wednesday") dayNum = 3;
    else if (day == "thu" || day == "thursday") dayNum = 4;
    else if (day == "fri" || day == "friday") dayNum = 5;
    else if (day == "sat" || day == "saturday") dayNum = 6;
    else if (day == "sun" || day == "sunday") dayNum = 7;
    else {
        cout << "Invalid day!" << endl;
        return 0;
    }
    // Switch to print rainbow color based on day
    switch (dayNum) {
        case 1: cout << "Rainbow Color : Violet" << endl; break;
        case 2: cout << "Rainbow Color : Indigo" << endl; break;
        case 3: cout << "Rainbow Color : Blue" << endl; break;
        case 4: cout << "Rainbow Color : Green" << endl; break;
        case 5: cout << "Rainbow Color : Yellow" << endl; break;
        case 6: cout << "Rainbow Color : Orange" << endl; break;
        case 7: cout << "Rainbow Color : Red" << endl; break;
    }

    return 0;
}
