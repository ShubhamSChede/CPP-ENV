#include <iostream>
#include <string>   // Required for string
using namespace std;

class Student {
protected:
    int studentID;
    string name;

public:
    // Constructor (using initializer list - better style)
    Student(int id, const string& n) : studentID(id), name(n) {}

    // Virtual function
    virtual void displayInfo() const {
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
