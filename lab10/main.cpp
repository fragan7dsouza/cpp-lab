#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    void getdata() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display() {
        cout << real << "+" << imag << "i" << endl;
    }
    Complex operator+(Complex C) {
        Complex temp;
        temp.real = real + C.real;
        temp.imag = imag + C.imag;
        return temp;
    }
    Complex operator-(Complex C) {
        Complex temp;
        temp.real = real - C.real;
        temp.imag = imag - C.imag;
        return temp;
    }
};
int main() {
    Complex C1, C2, sum, diff;
    cout << "Enter first complex number:\n ";
    C1.getdata();
    cout << "Enter second complex number:\n ";
    C2.getdata();
    sum = C1 + C2;
    diff = C1 - C2;
    cout << "First complex number: ";
    C1.display();
    cout << "Second complex number: ";
    C2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    return 0;
}
