#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes;
public:
    void getTime() {
        cout << "Enter hours and minutes: ";
        cin >> hours >> minutes;
    }

    void add(Time t1, Time t2) {
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

    void putTime() {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
    Time t1, t2, t3;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "Enter second time:\n";
    t2.getTime();

    t3.add(t1, t2);

    cout << "\nFirst Time: ";
    t1.putTime();

    cout << "Second Time: ";
    t2.putTime();

    cout << "Total Time: ";
    t3.putTime();

    return 0;
}
