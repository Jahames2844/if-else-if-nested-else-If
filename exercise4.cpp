#include <iostream>
using namespace std;

int main() 
{
    int PIN = 1234;
    double Balance = 500;
    double Withdrawal;

    cout << "Input Pin...\n";
    cin >> PIN;

    cout << "Withdrawal Amount\n";
    cin >> Withdrawal;

    if (PIN != 1234) {
        cout << "PIN incorrect.\n";
        return 1;
    } 
    
}