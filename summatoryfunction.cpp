#include <iostream>

using namespace std;

int summatory(int num1,int num2){

    return num1 + num2;

}

int main(){
    int number1, number2;

    cout << "Give me the number 1: ";
    cin >> number1;
    cout << "GIve me the number 2: ";
    cin >> number2;

    summatory(number1,number2);

    cout << "The summatory is: " << summatory(number1,number2);
}
