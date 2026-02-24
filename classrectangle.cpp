#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void inputDimensions() {
        cout << "\nEnter length and width: ";
        cin >> length >> width;
    }

    Rectangle(); // default constructor
    Rectangle(int, int); // parameterized constructor

    float calculateArea() {
        return (length * width);
    }

    float calculatePerimeter() {
        return (2 * (length + width));
    }

    void displayResult() {
        cout << "\nArea is " << calculateArea();
        cout << "\nPerimeter is " << calculatePerimeter();
    }
};


Rectangle::Rectangle() {
    cout << "Default constructor called\n";
    length = 0;
    width = 0;
}


Rectangle::Rectangle(int l, int w) {
    length = l;
    width = w;
}

int main() {
    Rectangle r1, r2(78, 45);

    // r1.inputDimensions(); 
    r1.displayResult();
    r2.displayResult();

    
    return 0;
}