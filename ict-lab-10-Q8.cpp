#include <iostream>
#include <string>
using namespace std;

class MealOrder {
private:
    string studentName;
    string meals[3];
    int mealCount;

public:
    MealOrder(string name) {
        studentName = name;
        mealCount = 0;
    }

    void addMeal(string meal) {
        if (mealCount == 3) {
            cout << "Cannot add '" << meal << "'. Meal limit reached!\n";
            return;
        }

        meals[mealCount] = meal;
        mealCount++;

        cout << "Meal '" << meal << "' added successfully.\n";
        cout << "Remaining slots: " << (3 - mealCount) << "\n\n";
    }
};

int main() {
    MealOrder m("Ali");

    m.addMeal("Biryani");
    m.addMeal("Pizza");
    m.addMeal("Pasta");
    m.addMeal("Burger"); 

    return 0;
}
