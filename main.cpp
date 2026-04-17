#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "1. Add Regular Student\n";
        cout << "2. Add Scholarship Student\n";
        cout << "3. Display All Records\n";
        cout << "4. Exit\n";

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Adding Regular Student\n";
            case 2:
                cout << "Adding Scholarship Student\n";
            case 3:
                cout << "Displaying Records\n";
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}


