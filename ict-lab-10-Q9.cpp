#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Passenger {
private:
    int age;
    string seatNumber;

public:
    string name;

    Passenger(string n) : name(n), age(0), seatNumber("N/A") {}

    bool setAge(int a) {
        if (a >= 1 && a <= 120) {
            age = a;
            return true;
        }
        cout << "Invalid age! Age must be between 1 and 120.\n";
        return false;
    }

    bool setSeatNumber(string seat) {
        int len = seat.length();

        // Seat must be at least 2 chars: "12A"
        if (len < 2) {
            cout << "Invalid seat number format! (e.g., 12A, 1B)\n";
            return false;
        }

        // Last character must be a letter
        char last = seat[len - 1];
        if (!isalpha(last)) {
            cout << "Seat must end with a letter (e.g., 12A)\n";
            return false;
        }

        // First part must be digits
        for (int i = 0; i < len - 1; i++) {
            if (!isdigit(seat[i])) {
                cout << "Seat must start with numbers followed by a letter.\n";
                return false;
            }
        }

        seatNumber = seat;
        return true;
    }

    void showInfo() {
        cout << "\nPassenger Details:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Seat Number: " << seatNumber << "\n";
    }
};

int main() {
    Passenger p("Ahmed");

    p.setAge(22);
    p.setSeatNumber("12A");

    p.setAge(150);       
    p.setSeatNumber("AB1"); 

    p.showInfo();

    return 0;

}
