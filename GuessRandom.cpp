#include <iostream>
#include <cstdlib>
using namespace std;
int num1,guess;
int main(){
for(int i = 1; i<100; ){
    num1 = rand()%100;
    cout << "Guess the number : ";
    cin >> guess;
if(guess == num1){
    cout << "You have guessed! "<<endl;
    break;
}else if(guess > num1){
    cout <<"Guess to high"<<endl;
}else if (guess < num1){
    cout << "Guess too low"<<endl;
}
}
return 0;
}
