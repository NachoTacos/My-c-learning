#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string);
int main() {
    string input;
    cout<<"Palindrome or not \n";
    cout<<"Write: ";getline(cin, input);
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    if (isPalindrome(input))
        cout<<"Palindrome."<<endl;
    else
        cout<<"Not a palindrome."<<endl;
    return 0;
}
bool isPalindrome(string s) {
    if (s.length() <= 1)
        return true;
    else if (s[0] != s[s.length() - 1])
        return false;
    else
        return isPalindrome(s.substr(1, s.length() - 2));
}
