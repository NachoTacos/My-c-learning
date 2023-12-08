#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Shape {
protected:
    double width, height;
public:
    Shape(const double width, double height)
        : width(width), height(height){}

    virtual void displayInfo() const {
        cout << " --- Example name ---" << endl;
        cout << "Width: " << width << endl;
        cout << "height: " << height << endl;
    }
};

class Rectangle : public Shape {
private:
    double area;
public:
    Rectangle(const double width, double height, const double area)
        : Shape(width, height), area(area) {}

    void displayInfo() const override {
        Shape::displayInfo();
        cout << "area: " << area << endl;
    }
};

int main() {
    vector<Shape*> figure;

    Shape* shape1 = new Shape(20, 30);
    Rectangle* rectangle1 = new Rectangle(10, 5, 50);

    figure.push_back(shape1);
    figure.push_back(rectangle1);

    for (const auto object : figure) {
        object->displayInfo();
        cout << endl;
    }

    // Cleanup
    for (const auto object : figure) {
        delete object;
    }

    return 0;
}
