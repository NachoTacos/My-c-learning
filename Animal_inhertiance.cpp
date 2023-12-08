 #include <iostream>
#include <vector>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;
    string species;
public:
    Animal(const string name, int age, const string species)
        : name(name), age(age), species(species) {}

    virtual void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Species: " << species << endl;
    }
};

class Dog : public Animal {
private:
    string breed;
public:
    Dog(const string name, int age, const string species, const string breed)
        : Animal(name, age, species), breed(breed) {}

    void displayInfo() const override {
        Animal::displayInfo();
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    vector<Animal*> animals;

    Animal* animal1 = new Animal("Leo", 3, "Lion");
    Dog* dog1 = new Dog("Max", 5, "Canine", "Labrador");

    animals.push_back(animal1);
    animals.push_back(dog1);

    for (const auto& animal : animals) {
        animal->displayInfo();
        cout << endl;
    }

    // Cleanup
    for (const auto& animal : animals) {
        delete animal;
    }

    return 0;
}
