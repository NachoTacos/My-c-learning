#include <iostream>
using namespace std;
int suma;
int main(){
    for(int i=0;i<100;i++){
        if(i%2!=0){
            suma = suma + i;
                  }
    }
    cout << "The summary from the odd numbers is: "<<suma;
return 0;
}
