#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Vehicle {
    protected:
        string make, model;
        int year;
    public:
        Vehicle(const string make, string model, const int year)
        : make(make), model(model), year(year){}
    virtual void displayInfo() const {

        cout << "--- Nacho Tacos cars ---" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle{
    private:
        int numDoors;
    public:
    Car(const string make, string model, int year,const int numDoors)
    : Vehicle(make, model, year), numDoors(numDoors){}
    void displayInfo() const override{
        Vehicle::displayInfo();
        cout << "Number of doors: " << numDoors << endl;
    }
};

int main(){
    vector <Vehicle*> automovile;

    Vehicle* v1 = new Vehicle("Ford","XLT", 1997);
    Car* c1 = new Car("Dodge", "NXT", 1988, 4);

    automovile.push_back(v1);
    automovile.push_back(c1);

    for (const auto object : automovile){
        object -> displayInfo();
        cout << endl;
    }

    for (const auto object : automovile) {
        delete object;
    }
    return 0;
}
