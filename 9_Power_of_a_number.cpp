#include <iostream>
using namespace std;
int power(int base, int exponent);
int main() {
    int num, exponent;
    cout<<"Calculate the power of a given number \n\n";
    cout<<"Enter the number: ";cin>>num;
    cout<<"Enter the exponent: ";cin>>exponent;
    int result=power(num, exponent);
    cout<<num<<" raised to the power of "<<exponent<<" is: "<<result<<endl;
    return 0;
}
int power(int num, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return num*power(num,exponent-1);
}
