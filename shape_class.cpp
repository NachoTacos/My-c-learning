#include <iostream>

using namespace std;

class Shape
{
    private:
        string name, colour;
    public:
        void setName(string shapeName)
        {
            name = shapeName;
        }
        string getName()
        {
            return name;
        }
        void setColour(string shapeColour)
        {
            colour = shapeColour;
        }
        string getColour()
        {
            return colour;
        }
        void shapeInfo()
        {
            cout << "Name: " << name << endl
                 << "Colour: " << colour << endl;
        }

};

int main()
{
    Shape shape1;

    string s_name, s_colour;

    cout << "Give me the shape name: " << endl;
    cin >> s_name;
    cout << "Give me the shape colour: " << endl;
    cin >> s_colour;

    shape1.setName(s_name);
    shape1.setColour(s_colour);

    shape1.shapeInfo();

    return 0;
}
