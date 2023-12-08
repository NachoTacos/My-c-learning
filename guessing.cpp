#include <iostream>
using namespace std;
int number;
bool guess;
int main(){
    cout << "Give me a guess, between 1 - 10: ";
    cin >> number;
        if(number == 2){
            guess = true;
            cout << "Correct! you have guessed";
}
        while(guess == false){

        cout << "Try again!"<<endl;
        main();
}
}
