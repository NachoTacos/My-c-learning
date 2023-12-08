#include <iostream>
#include <string.h>

using namespace std;

float factorial (float number){
    if(number > 1){
        return number* factorial(number-1);
    }
    else{
        return 1;
    }

}


int main(){
    int number1 = 0;
    cout << "Give me the number: "; cin >> number1;
    cout << factorial(number1);
    return 0;
}
