#include <iostream>
using namespace std;
class person{
    string fname;
    public:
        person();
        ~person();
        void setFname(string);
        void getFname();

};

person p1, p2;

main(){
    p1.setFname("poncho");
    p1.getFname();


}
person::person(){
    fname = "No name yet";
    cout << fname << " Was born!" << endl;
}
person::~person(){
    cout << fname << " Died!" << endl;
}

void person::setFname(string newName){
    fname = newName;
}

void person::getFname(){
    cout <<"My name is "<< fname << endl;

}


+
