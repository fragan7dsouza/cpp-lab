#include <iostream>
using namespace std;

class Sample {
    int num;
    char ch;
    float val;
public:
    Sample() {
        num = 0;
        ch = 'X';
        val = 0.0;
    }

    Sample(int n, char c, float v) {
        num = n;
        ch = c;
        val = v;
    }

    Sample(int n, char c = 'A') {
        num = n;
        ch = c;
        val = 1.1;
    }

    Sample(const Sample &s) {
        num = s.num;
        ch = s.ch;
        val = s.val;
    }

    void display() {
        cout << "Integer: " << num << endl
             << "Character: " << ch << endl
             << "Float: " << val << endl;
    }
};

int main() {
    Sample s1;
    cout << "Default Constructor: " << endl;
    s1.display();

    Sample s2(10, 'B', 3.14);
    cout << "Parameterized Constructor: " << endl;
    s2.display();

    Sample s3(20);
    cout << "Default Argument Constructor (int only): " << endl;
    s3.display();

    Sample s4(30, 'C');
    cout << "Default Argument Constructor (int + char): " << endl;
    s4.display();

    Sample s5(s2);
    cout << "Copy Constructor: " << endl;
    s5.display();

    return 0;
}
