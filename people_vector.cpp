#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Person{
    protected:
        string name, occupation;
        int age;

    public:
        Person(const string name, string occupation, int age)
        : name(name), occupation(occupation), age(age){}

        virtual void displayInfo() const {
            cout << "---PEOPLE---" << endl;
            cout << "Name: " << name << endl;
            cout << "Occupation : " << occupation << endl;
            cout << "Age: " << age << endl;
        }

};
class Student : public Person{
    private:
        string major;

    public:
        Student(const string name, string occupation, int age, const string major)
        : Person(name, occupation, age), major(major){}

        void displayInfo() const override{
            Person::displayInfo();
            cout << endl;
        }
};

int main(){
    vector < Person* > person_object;

    Person* p1 = new Person("Pedro","Taxi Driver", 40);
    Student* s1 = new Student("Jose","Chess player", 19, "Software engineering");

    person_object.push_back(p1);
    person_object.push_back(s1);

    for (const auto object : person_object){
        object -> displayInfo();
        cout << endl;
    }

    for (const auto object : person_object){
        delete object;
    }

    return 0;

}

