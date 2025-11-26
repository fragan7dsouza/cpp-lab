#include <iostream>
using namespace std;
class Student {
protected:
    int rollNo;
    string name;
public:
    void getStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayStudentDetails() const {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};
class Engineering : public Student {
private:
    string branch;
    int semester;
public:
    void getEngineeringDetails() {
        getStudentDetails();
        cout << "Enter Engineering Branch: ";
        getline(cin, branch);
        cout << "Enter Semester: ";
        cin >> semester;
    }

    void displayEngineeringDetails() const {
        cout << "\n--- Engineering Student ---\n";
        displayStudentDetails();
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
    }
};
class MinorDegree : public Student {
private:
    string minorSubject;
    string university;
public:
    void getMinorDetails() {
        getStudentDetails();
        cout << "Enter Minor Subject: ";
        getline(cin, minorSubject);
        cout << "Enter University Offering Minor: ";
        getline(cin, university);
    }

    void displayMinorDetails() const {
        cout << "\n--- Minor Degree Student ---\n";
        displayStudentDetails();
        cout << "Minor Subject: " << minorSubject << endl;
        cout << "University: " << university << endl;
    }
};
int main() {
    Engineering engStudent;
    MinorDegree minorStudent;
    cout << "Enter Engineering Student Info:\n";
    engStudent.getEngineeringDetails();
    cin.ignore();
    cout << "\nEnter Minor Degree Student Info:\n";
    minorStudent.getMinorDetails();
    engStudent.displayEngineeringDetails();
    minorStudent.displayMinorDetails();
    return 0;
}
