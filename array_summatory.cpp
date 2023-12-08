#include <iostream>

using namespace std;

int array_numbers[] = {10,11,12};

int summary(int arraynum[]){
    int summatory = 0;
    for(int i = 0; i < 3; i++){
        summatory += arraynum[i];
    }
    return summatory / 3;
}


int main(){
    cout << "The average is is: ";
    cout << summary(array_numbers);
    return 0;
}
