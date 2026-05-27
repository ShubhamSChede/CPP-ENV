#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int studentID;
    string name;

public:
    Student(int id, string n) : studentID(id), name(n) {}

    virtual void displayInfo() {
        cout << "ID: " << studentID << " | Name: " << name << "\n";
    }

    virtual ~Student() {}
};

#endif
