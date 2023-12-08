#include <iostream>

using namespace std;

class Cars
{
    private:
         string make, model;
         int year;
    public:
        void setMake(string Carmake)
        {
            make = Carmake;
        }
        string getMake()
        {
            return make;
        }
        void setModel(string CarModel)
        {
            model = CarModel;
        }
        string getModel()
        {
            return model;
        }
        void setYear(int CarYear)
        {
            year = CarYear;
        }
        int getYear()
        {
            return year;
        }
        void CarDetails()
        {
            cout << "Model: " << model << endl;
            cout << "Make: " << make << endl;
            cout << "Year: " << year << endl;
        }

};

int main()
{
    Cars car1;

    string make, model;
    int year;

    cout << "Give me the car make: ";
    cin >> make;
    cout << "Give me the car model: ";
    cin >> model;
    cout << "Give me the car year: ";
    cin >> year;

    car1.setMake(make);
    car1.setModel(model);
    car1.setYear(year);

    car1.CarDetails();
    return 0;
}
