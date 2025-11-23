#include <iostream>
using namespace std;

class PatientMonitor {
private:
    int heartRate;
    int oxygenLevel;

public:
    PatientMonitor() : heartRate(0), oxygenLevel(0) {}

    bool setHeartRate(int hr) {
        if (hr >= 30 && hr <= 180) {
            heartRate = hr;
            return true;
        }
        cout << "Invalid Heart Rate! Must be 30-180.\n";
        return false;
    }

    bool setOxygenLevel(int ox) {
        if (ox >= 50 && ox <= 100) {
            oxygenLevel = ox;
            return true;
        }
        cout << "Invalid Oxygen Level! Must be 50-100.\n";
        return false;
    }

    void showStatus() {
        cout << "\nPatient Status:\n";
        cout << "Heart Rate: " << heartRate << "\n";
        cout << "Oxygen Level: " << oxygenLevel << "\n";

        if (oxygenLevel < 80) {
            cout << "Status: CRITICAL ALERT\n";
        }
        else if (heartRate < 40 || heartRate > 150) {
            cout << "Status: ABNORMAL HEART RATE\n";
        }
        else {
            cout << "Status: STABLE\n";
        }
    }
};

int main() {
    PatientMonitor pm;

    pm.setHeartRate(85);
    pm.setOxygenLevel(95);

    pm.setHeartRate(200); 
    pm.setOxygenLevel(30); 

    pm.showStatus();

    return 0;
}
