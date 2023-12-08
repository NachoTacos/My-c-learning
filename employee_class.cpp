#include <iostream>

using namespace std;

class Employee
{
    private:
        double salary;
        int age;
        string name, JobTitle;
    public:
        void setAge(int Employee_age)
        {
            age = Employee_age;
        }
        int getAge()
        {
            return age;
        }
        void setSalary(double Employee_salary)
        {
            salary = Employee_salary;
        }
        int getSalary()
        {
            return salary;
        }

        void setName(string Employee_name)
        {
            name = Employee_name;
        }
        string getName()
        {
            return name;
        }
        void setJobTitle(string Employee_jobtitle)
        {
            JobTitle = Employee_jobtitle;
        }
        string getJobTitle()
        {
            return JobTitle;
        }
        void employeeDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Age: " << age << endl;
            cout << "Job title: " << JobTitle << endl;
        }
};

int main()
{
      Employee employee1;
    double e_salary;
    string e_name, e_jobtitle;
    int e_age;

    cout << "Give me the employee name: ";
    cin >> e_name;
    cout << "Give me the employee salary: ";
    cin >> e_salary;
    cout << "Give me the employee age: ";
    cin >> e_age;
    cout << "Give me the employee job title: ";
    cin >> e_jobtitle;

    employee1.setName(e_name);
    employee1.setSalary(e_salary);
    employee1.setAge(e_age);
    employee1.setJobTitle(e_jobtitle);

    employee1.employeeDetails();

    return 0;
}
