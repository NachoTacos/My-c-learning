#include <iostream>

using namespace std;

float celcius_fahrenheit(float celcius){
return celcius * 1.8 + 32;
}

int main(){
float celcius1 = 10;
cout << "The temperature in fahrenheit is: " << celcius_fahrenheit(celcius1);

}
