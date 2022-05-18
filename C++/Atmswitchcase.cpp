#include <iostream>

using namespace std;
int main()
{
    int user, bal, c;
    bal = 10000;
    cout << "Account Holder Name - Shariq Shah\n";
    cout << "Account No - 001\n";
    cout << "Account Balance - 10,000\n";
    cout << "Press 1 for Withdrawal\n";
    cout << "Press 2 for Deposit \n";
    cout << "Press 3 for Check Balance\n";
    cin >> user;
    switch (user)
    {
    case 1:
        cout << "Enter Amount for withdrawal\n";
        cin >> c;
        bal = bal - c;
        cout << "Account Holder Name - Shariq Shah\n";
        cout << "Account No - 001\n";
        cout <<"Minimum Balance Available - "<< bal;
        cout<<"\n THANKS YOU FOR USING ATM CARD";
        break;

    case 2:
        cout << "Enter Amount for withdrawal\n";
        cin >> c;
        bal = bal + c;
        cout << "Account Holder Name - Shariq Shah\n";
        cout << "Account No - 001\n";
        cout <<"Minimum Balance Available - "<< bal;
        cout<<"\n THANKS YOU FOR USING ATM CARD";
        break;    
    
    case 3:
        cout << "Account Holder Name - Shariq Shah\n";
        cout << "Account No - 001\n";
        cout <<"Minimum Balance Available -"<< bal;
        cout<<"\n THANKS YOU FOR USING ATM CARD";
        break;

    default:
    cout<< "ERROR 404";
        break;
    }
}