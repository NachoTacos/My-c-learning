#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee{
    protected:
        string name, JobTitle;
        int age;
    public:
        Employee(string name, string JobTitle, int age)
        : name(name), JobTitle(JobTitle), age(age){}
        virtual void displayInfo(){
            cout << "---EMPLOYEE---" << endl;
            cout << "Name: " << name << endl;
            cout << "Job Title: " << JobTitle << endl;
            cout << "Age: " << age << endl;
        }
};

class Manager : public Employee{
    private:
        int numEmployeesManaged;
    public:
        Manager(string name, string JobTitle, int age, int numEmployeesManaged)
        : Employee(name, JobTitle, age), numEmployeesManaged(numEmployeesManaged){}
        void displayInfo(){
            Employee :: displayInfo();
            cout << "Number of employees under control: " << numEmployeesManaged << endl;
            cout << endl;
        }

};

int main(){
    vector < Employee* > employe_object;

    Employee* e1 = new Employee("Pepe", "Accountant", 35);
    Manager* m1 = new Manager("Pedro", "Manager", 40, 10);

    employe_object.push_back(e1);
    employe_object.push_back(m1);

    for(const auto object : employe_object){
        object -> displayInfo();
        cout << endl;
    }

    for(const auto object : employe_object){
        delete object;
    }
    return 0;
}
