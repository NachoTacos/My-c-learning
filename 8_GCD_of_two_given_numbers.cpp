#include <iostream>
using namespace std;
int gcd(int a, int b);
int main() {
    int num1, num2;
    cout<<"GCD (Greatest Common Divisor) of two given numbers \n\n";
    cout<<"Enter the two numbers: "<<endl;cin>>num1>>num2;
    int result = gcd(num1, num2);
    cout<<"The GCD of " <<num1<<" and "<<num2<<" is: "<<result<<endl;
    return 0;
}
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
