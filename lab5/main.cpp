#include <iostream>
using namespace std;

class Base {
    int baseValue;
public:
    Base(int val) {
        baseValue = val;
        cout << "Base class constructor called. baseValue = " << baseValue << endl;
    }
    void showBase() {
        cout << "Base Value: " << baseValue << endl;
    }
};

class Derived : public Base {
    int derivedValue;
public:
    Derived(int baseVal, int derivedVal) : Base(baseVal) {
        derivedValue = derivedVal;
        cout << "Derived class constructor called. derivedValue = " << derivedValue << endl;
    }
    void showDerived() {
        showBase();
        cout << "Derived Value: " << derivedValue << endl;
    }
};

int main() {
    Derived obj(10, 20);

    cout << "\nDisplaying values:\n";
    obj.showDerived();

    return 0;
}
