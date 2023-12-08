#include <iostream>
#include <cmath>

using namespace std;
float radius1, height1, pi1;
float circle_area(float radius,float height, float pi){
    radius = pow(radius,2);
return pi * radius * height;
}



int main(){
cout << "Give me the radius from the cylinder: ";
cin >> radius1;
cout << "Give me the height from the cylinder: ";
cin >> height1;
cout << "Give me pi: ";
cin >> pi1;

cout << "The volume from the cylinder is: " << circle_area(radius1,height1,pi1);


}
