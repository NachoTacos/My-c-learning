#include <iostream>

using namespace std;

class Person
{
    private:
        string name, adress;
        int age;
    public:
        void setName(string Person_name)
        {
            name = Person_name;
        }
        string getName()
        {
            return name;
        }

        void setAdress(string Person_adress)
        {
            adress = Person_adress;
        }
        string getAdress()
        {
            return adress;
        }

        void setAge(int Person_age)
        {
            age = Person_age;
        }
        int getAge()
        {
            return age;
        }
        void personDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Adress: " << adress << endl;
            cout << "age: " << age;
        }
};

int main()
{
    Person person1;

    string p_name, p_adress;
    int p_age;

    cout << "Give me the person name: ";
    cin >> p_name;
    cout << "Give me the person adress: ";
    cin >> p_adress;
    cout << "Give me the person age: ";
    cin >> p_age;

    person1.setName(p_name);
    person1.setAdress(p_adress);
    person1.setAge(p_age);

    person1.personDetails();

    return 0;

}
