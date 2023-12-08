#include <iostream>
#include <string>
using namespace std;
string reverse(string);
int main() {
    string word;
    cout<<"Reversed string \n\n";
    cout<<"Enter a string to reverse: ";getline(cin, word);
    string reversed = reverse(word);
    cout<<"Reversed string: "<<reversed<<endl;
    return 0;
}
string reverse(string s) {
    if (s.length() <= 1)
        return s;
    else
        return reverse(s.substr(1)) + s[0];
}
