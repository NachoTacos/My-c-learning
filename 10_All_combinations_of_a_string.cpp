#include <iostream>
#include <string>
using namespace std;
void generateCombinations(string str, string current, int index);
int main() {
    string input;
    cout<<"All possible combinations of a given string \n\n";
    cout<<"Write something: ";cin>>input;
    generateCombinations(input, "", 0);
    return 0;
}
void generateCombinations(string str, string current, int index) {
    int length = str.length();
    if (index == length) {
        cout << current << endl;
        return;
    }
    generateCombinations(str, current, index + 1);
    generateCombinations(str, current + str[index], index + 1);
}
