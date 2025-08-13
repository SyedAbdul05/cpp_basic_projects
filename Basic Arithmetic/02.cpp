#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string day;
    cout << "Enter a day (e.g., sat, sun, mon): ";
    cin >> day;

    // Convert to lowercase so input like "SAT" also works
    for (int i = 0; i < day.length(); i++) {
        day[i] = tolower(day[i]);
    }

    if (day == "sat" || day == "sun") {
        cout << "Weekend" << endl;
    } else {
        cout << "Weekday" << endl;
    }

    return 0;
}

