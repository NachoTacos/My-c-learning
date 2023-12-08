#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double width, length;
    public:
        void setLength(double l)
        {
            length = l;
        }
        double getLength()
        {
            return length;
        }
          void setWidth(double w)
        {
            width = w;
        }
        double getWidth()
        {
            return width;
        }
        double calculateArea()
        {
            return length * width;
        }
};

int main()
{
    Rectangle rectangle1;

    double l, w;

    l = 10;
    w = 10;
    rectangle1.setLength(l);
    rectangle1.setWidth(w);

    cout << "Length: " << rectangle1.getLength() << endl;
    cout << "Width: " << rectangle1.getWidth() << endl;
    cout << "Area: " << rectangle1.calculateArea() << endl;
}
