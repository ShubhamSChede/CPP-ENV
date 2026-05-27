#ifndef SCHOLARSHIPSTUDENT_H
#define SCHOLARSHIPSTUDENT_H

#include "Student.h"

class ScholarshipStudent : public Student {
private:
    double scholarshipAmount;

public:
    ScholarshipStudent(int id, string n, double amount)
        : Student(id, n), scholarshipAmount(amount) {}

    void displayInfo() override {
        Student::displayInfo();
        cout << "   Scholarship: $" << scholarshipAmount << "\n";
    }
};

#endif
