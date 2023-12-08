#include <iostream>
using namespace std;
int number,multiplicationtable;

int main(){
    cout << "Give me a number: ";
    cin >> number;

        for(int i=1; i<11;i++){
            cout << i <<" x "<< number <<" "<< "= "<<i * number<<endl;
            }
return 0;
}
