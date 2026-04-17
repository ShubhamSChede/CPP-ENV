#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int studentID;
    string name;

public:
    Student(int id, const string& n) : studentID(id), name(n) {}

    virtual void displayInfo() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
    }
};

class ScholarshipStudent : public Student {
private:
    double scholarshipAmount;

public:
    // Constructor
    ScholarshipStudent(int id, const string& n, double amount)
        : Student(id, n), scholarshipAmount(amount) {}

    // Override displayInfo
    void displayInfo() const override {
        Student::displayInfo(); // call base class method
        cout << "Scholarship Amount: " << scholarshipAmount << endl;
    }
};

// Example usage
int main() {
    ScholarshipStudent s1(102, "Rahul", 5000.50);
    s1.displayInfo();
    return 0;
}
