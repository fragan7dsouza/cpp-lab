#include <iostream>
#include <cstring>
using namespace std;
class STRNG {
    char *str;
public:
    STRNG(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    void display() {
        cout << str << endl;
    }
    STRNG concat(const STRNG &s2) {
        char *temp = new char[strlen(str) + strlen(s2.str) + 1];
        strcpy(temp, str);
        strcat(temp, s2.str);
        STRNG result(temp);
        delete[] temp;
        return result;
    }
    ~STRNG() {
        delete[] str;
    }
};
int main() {
    STRNG s1("Hello");
    STRNG s2("World");
    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();
    STRNG s3 = s1.concat(s2);
    cout << "Concatenated String: ";
    s3.display();
    return 0;
}
