#include <iostream>
#include <string>
using namespace std;

class Swap { 
public:
    swap(int &a, int &b) {
        int c = a;
        a = b;
        b = c;
        cout << "Swapped int values: a=" << a << " b=" << b << endl;
    }

    swap(float &x, float &y) {
        float c = x;
        x = y;
        y = c;
        cout << "Swapped float values: x=" << x << " y=" << y << endl;
    }
};

int main() {
    int a = 10, b = 8;
    float x = 9.9, y = 8.9;

    cout << "Before swap int values: " << a << " " << b << endl;
    cout << "Before swap float values: " << x << " " << y << endl;

    Swap s1(a, b);   // swaps int
    Swap s2(x, y);   // swaps float

    cout << "After swap int values: " << a << " " << b << endl;
    cout << "After swap float values: " << x << " " << y << endl;

    return 0;
}