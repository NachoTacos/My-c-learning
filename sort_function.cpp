#include <iostream>

using namespace std;

int numbers[] = {1,7,9,4,5};


int ascending_order(int lista[]){


    for(int j = 0; j < 5; j++){

        for(int i = j+1; i < 5; i++){

            if(lista[j] < lista[i]){
                int temp = lista[j];
                lista[j] = lista[i];
                lista[i] = temp;
            }

        }
    }
    for(int i = 0; i < 5; i++){

            cout << lista[i] << " ";
            }
}


int main(){

    ascending_order(numbers);
    return 0;

}
