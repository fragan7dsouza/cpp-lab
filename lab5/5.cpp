#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cout << "Base class (Student) constructor called." << endl;
    }
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};
class EngineeringStudent : public Student {
private:
    string branch;

public:
    EngineeringStudent(string n, int r, string b) : Student(n, r) {
        branch = b;
        cout << "Derived class (EngineeringStudent) constructor called." << endl;
    }
    void displayDetails() {
        displayStudent(); 
        cout << "Branch: " << branch << endl;
    }
};
int main() {
    EngineeringStudent e1("Anaam", 101, "Computer Science");
    cout << "\n--- Student Details ---" << endl;
    e1.displayDetails();
    return 0;
}