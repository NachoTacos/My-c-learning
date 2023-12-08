#include <iostream>
using namespace std;
int num, summary;
int main(){
 while(num >= 0){
    cout << "Give me a series of numbers: ";
    cin >> num;
 if(num < 0)
    continue;
    summary = summary + num;
    cout << "The summary is: "<<summary<<endl;
 }
 cout << "Final summary value: " << summary;
 return 0;
}
