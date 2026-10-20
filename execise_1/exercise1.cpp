#include <iostream>
using namespace std;


int main() 
{
    double Number;

    cout << "Input number... \n";
    cin >> Number;

    if (Number > 0) {
        cout << "Positive number.\n";
        return 1;
    } else {
        cout << "Negative number.\n";
        return 1;
    }

    return 0;
}