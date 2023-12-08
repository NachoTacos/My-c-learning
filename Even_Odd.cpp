#include <iostream>

using namespace std;

class Number{
    public:
        void isEven(int number){
            if (number % 2 == 0){
                cout << "The number is even" << endl;
            }
            else{
                cout << "The number is not even" << endl;
            }
        }
};

class Integer : public Number{
    private:
        int value;
    public:
        void setInteger(int integer){
            value = integer;
        }
        int getInteger(){
            return value;
        }
        void OddOrEven(){
            Number :: isEven(value);
            cout << endl;
        }

};


int main(){
    Integer even_or_odd;
    int number;
    cout << "Give me a number: " << endl;
    cin >> number;

    even_or_odd.setInteger(number);
    even_or_odd.OddOrEven();
    return 0;
}
