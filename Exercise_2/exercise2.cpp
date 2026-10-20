#include <iostream>
using namespace std;

int main() 
{
    int Number;

    cout << "Input Number...\n";
    cin >> Number;


    if (Number % 2 == 0) {
        cout << "Even number\n";
        return 1;
    } else { 
        cout << "odd number\n";
        return 1;
     }
    
     return 0;
    
}