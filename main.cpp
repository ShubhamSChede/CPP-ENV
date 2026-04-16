#include <iostream>
using namespace std;

class Student {
protected:
    int studentID;
    string name;

public:
    // Constructor
    Student(int id, string n) {
        studentID = id;
        name = n;
    }

    // Virtual function
    virtual void displayInfo() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
    }
};

// Example usage
int main() {
    Student s1(101, "Shubham");
    s1.displayInfo();
    return 0;
}