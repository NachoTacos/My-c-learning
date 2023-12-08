#include <iostream>

using namespace std;

int even_or_odd(int number){
    if (number % 2 == 0)
        cout << "Even number";
    else{
        cout << "Odd number";
    }
}


int main(){
    int number1 = 0;
    cout << "Give me a number: "; cin >> number1;
    even_or_odd(number1);
    return 0;
}
