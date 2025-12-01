#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int studentID;
    string registeredCourses[5];
    int courseCount;

public:
    Student(string n, int id) {
        name = n;
        studentID = id;
        courseCount = 0;
    }

    void addCourse(string course) {
        if (courseCount == 5) {
            cout << "Course limit reached! You cannot add more courses.\n";
            return;
        }

        registeredCourses[courseCount] = course;
        courseCount++;

        cout << "Course '" << course << "' added successfully.\n";
        cout << "Remaining slots: " << (5 - courseCount) << "\n\n";
    }
};

int main() {
    Student s("Ali", 12345);

    s.addCourse("Math");
    s.addCourse("Physics");
    s.addCourse("Computer Science");
    s.addCourse("English");
    s.addCourse("Chemistry");
    s.addCourse("History");

    return 0;
}

