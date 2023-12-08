#include <iostream>
#include <cmath>

using namespace std;

float circle_area(float radius){
    return 3.1416 * pow(radius,2);

}


int main(){
    float radius1;
    cout << "Give me the radius: ";
    cin >> radius1;
    cout << circle_area(radius1);
    return 0;
}
