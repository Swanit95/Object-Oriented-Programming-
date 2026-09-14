#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Constructors
    Time() { hours = 0; minutes = 0; }
    Time(int h, int m) { hours = h; minutes = m; }

    // Overloaded + operator to add minutes
    Time operator+(int additionalMinutes) {
        int totalMinutes = (hours * 60) + minutes + additionalMinutes;
        int newHours = (totalMinutes / 60) % 24;
        int newMinutes = totalMinutes % 60;
        return Time(newHours, newMinutes);
    }

    // Display function
    void display() const {
        cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << endl;
    }
};

int main() {
    int h, m;
    char colon;

    cout << "Enter departure time (HH:MM): ";
    cin >> h >> colon >> m;

    Time departureTime(h, m);
    Time arrivalTime;
    int travelDuration = 90;

    cout << "\nDeparture Time: ";
    departureTime.display();
    cout << "Travel Duration: " << travelDuration << " minutes" << endl;

    // Using the overloaded + operator
    arrivalTime = departureTime + travelDuration;

    cout << "Arrival Time: ";
    arrivalTime.display();

    return 0;
}
