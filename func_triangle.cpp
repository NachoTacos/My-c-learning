#include <iostream>

using namespace std;
float height, base;

int triangle_area(int base,int height){
    return base * height;
}

int main(){
    cout << "Give me the base: ";
    cin >> base;
    cout << "Give me the heigth: ";
    cin >> height;
    cout << "The area from the triangle is: "<<triangle_area(base, height);

}
