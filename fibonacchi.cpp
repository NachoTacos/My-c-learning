#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n < 2){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);

    }
}

int main(){
    int numero = 0;
    cout<< "Give me a number: ";
    cin >> numero;
    cout << fibonacci(numero);
    return 0;

}
