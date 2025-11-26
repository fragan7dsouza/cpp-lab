#include <iostream>
using namespace std;

class Employee {
private:
    int Eno;
    string Ename;
    float Salary;
public:
    void getData() {
        cout << "Enter employee no: ";
        cin >> Eno;
        cout << "Enter employee name: ";
        cin >> Ename;
        cout << "Enter employee salary: ";
        cin >> Salary;
    }

    void putData() {
        cout << "\nEmployee Number: " << Eno
             << "\nEmployee Name: " << Ename
             << "\nSalary: " << Salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        emp[i].getData();
    }

    for (int i = 0; i < n; i++) {
        cout << "\nDetails of Employee " << i + 1 << ":\n";
        emp[i].putData();
    }

    return 0;
}
