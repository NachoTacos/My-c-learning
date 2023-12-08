    #include <iostream>

using namespace std;

class Student
{
    private:
        string name;
        int grade, age;
    public:
        void setStudentName(string StudentName)
        {
            name = StudentName;
        }
        string getStudentName()
        {
            return name;
        }
        void setStudentGrade(int StudentGrade)
        {
            grade = StudentGrade;
        }
        int getStudentGrade()
        {
            return grade;
        }
        void setStudentAge(int StudentAge)
        {
            age = StudentAge;
        }
        int getAge()
        {
            return age;
        }
        void printStudentInfo()
        {
            cout << "Student name: " << name << endl;
            cout << "Student grade: " << grade << endl;
            cout << "Student age: " << age << endl;
        }
};


int main()
{
    Student student1;

    string Student_name;
    int Student_age, Student_grade;

    cout << "Give me the student name: " << endl;
    cin >> Student_name;
    cout << "Give me the student grade: " << endl;
    cin >> Student_grade;
    cout << "Give me the student age: " << endl;
    cin >> Student_age;

    student1.setStudentName(Student_name);
    student1.setStudentAge(Student_age);
    student1.setStudentGrade(Student_grade);

    student1.printStudentInfo();

    return 0;

}
