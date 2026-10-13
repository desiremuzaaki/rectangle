#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Functions for setting dimensions
    void setWidth(double w) {
        width = w;
    }

    void setLength(double l) {
        length = l;
    }

    // Functions for retrieving dimensions
    double getWidth() {
        return width;
    }

    double getLength() {
        return length;
    }

    // Function for calculating area
    double calculateArea() {
        return width * length;
    }

    // Function for calculating perimeter
    double calculatePerimeter() {
        return 2 * (width + length);
    }
};

int main() {
    // Creating the first Rectangle object
    Rectangle rectangle1;

    rectangle1.setWidth(5);
    rectangle1.setLength(10);

    cout << "Rectangle 1" << endl;
    cout << "Width: " << rectangle1.getWidth() << endl;
    cout << "Length: " << rectangle1.getLength() << endl;
    cout << "Area: " << rectangle1.calculateArea() << endl;
    cout << "Perimeter: " << rectangle1.calculatePerimeter() << endl;

    cout << endl;

    // Creating the second Rectangle object
    Rectangle rectangle2;

    rectangle2.setWidth(4);
    rectangle2.setLength(6);

    cout << "Rectangle 2" << endl;
    cout << "Width: " << rectangle2.getWidth() << endl;
    cout << "Length: " << rectangle2.getLength() << endl;
    cout << "Area: " << rectangle2.calculateArea() << endl;
    cout << "Perimeter: " << rectangle2.calculatePerimeter() << endl;

    return 0;
}
