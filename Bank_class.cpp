#include <iostream>

using namespace std;

class Bank
{
    private:
        string name, location;
        int numberOfAccounts;
    public:
        void setName(string bankName)
        {
            name = bankName;
        }
        string getName()
        {
            return name;
        }
        void setLocation(string bankLocation)
        {
            location = bankLocation;
        }
        string getLocation()
        {
            return location;
        }
        void setNumberOfAccounts(int bankNumberOfAccounts)
        {
            numberOfAccounts = bankNumberOfAccounts;
        }
        int getNumberOfAccounts()
        {
            return numberOfAccounts;
        }
        void bankInfo()
        {
            cout << "Name: " << name << endl
                 << "Location: " << location << endl
                 << "Number of accounts: " << numberOfAccounts << endl;
        }
};

int main()
{
    Bank bank1;

    string b_name, b_location;
    int b_NumberOfAccounts;

    cout << "Give me the name from the bank: ";
    cin >> b_name;
    cout << "Give me the location from the bank: ";
    cin >> b_location;
    cout << "Give me the number of accounts from the bank: ";
    cin >> b_NumberOfAccounts;

    bank1.setName(b_name);
    bank1.setLocation(b_location);
    bank1.setNumberOfAccounts(b_NumberOfAccounts);

    bank1.bankInfo();

    return 0;

}
