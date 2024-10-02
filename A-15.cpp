#include <iostream>
#include <string>

using namespace std;

class Faculty {
private:
    string name;
    int id;         // Faculty ID
    float salary;   // Faculty salary
    string department;

public:
    // Constructor to initialize faculty details
    Faculty(string n = "", int i = 0, float s = 0.0, string dep = "")
            : name(n), id(i), salary(s), department(dep) {}

    // Function to display faculty details
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Department: " << department << endl;
        cout << "-------------------------" << endl;
    }

    // Function to get the department
    string getDepartment() const {
        return department;
    }
};
