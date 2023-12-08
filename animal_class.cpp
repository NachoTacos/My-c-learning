#include <iostream>

using namespace std;

class Animal
{
    private:
        string name, type;
        int age;
    public:
        void setName(string AnimalName)
        {
            name = AnimalName;
        }
        string getName()
        {
            return name;
        }
        void setType(string AnimalType)
        {
            type = AnimalType;
        }
        string getType()
        {
            return type;
        }
        void setAge(int AnimalAge)
        {
            age = AnimalAge;
        }
        int getAge()
        {
            return age;
        }
        void animalInfo()
        {
            cout << "Animal name: " << name << endl
                 << "Animal type: " << type << endl
                 << "Animal age: "  << age  << endl;
        }
};


int main()
{
    Animal animal1;

    string a_name, a_type;
    int a_age;

    cout << "Give me the name of the animal: " << endl;
    cin >> a_name;
    cout << "Give me the type of the animal: " << endl;
    cin >> a_type;
    cout << "Give me the age of the animal: " << endl;
    cin >> a_age;

    animal1.setName(a_name);
    animal1.setType(a_type);
    animal1.setAge(a_age);

    animal1.animalInfo();

    return 0;


}
