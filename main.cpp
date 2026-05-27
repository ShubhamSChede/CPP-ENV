#include <iostream>
#include <vector>
#include "Student.h"
#include "ScholarshipStudent.h"
using namespace std;

int main() {
    vector<Student*> records;
    int choice;

    while (true) {
        cout << "\n1. Add Regular Student\n";
        cout << "2. Add Scholarship Student\n";
        cout << "3. Display All Records\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id; string name;
                cout << "Enter ID: "; cin >> id;
                cout << "Enter Name: "; cin >> name;
                records.push_back(new Student(id, name));
                cout << "Regular Student added.\n";
                break;
            }
            case 2: {
                int id; string name; double amount;
                cout << "Enter ID: "; cin >> id;
                cout << "Enter Name: "; cin >> name;
                cout << "Enter Scholarship Amount: "; cin >> amount;
                records.push_back(new ScholarshipStudent(id, name, amount));
                cout << "Scholarship Student added.\n";
                break;
            }
            case 3: {
                if (records.empty()) {
                    cout << "No records found.\n";
                } else {
                    for (Student* s : records) s->displayInfo();
                }
                break;
            }
            case 4: {
                for (Student* s : records) delete s;
                cout << "Exiting...\n";
                return 0;
            }
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}
