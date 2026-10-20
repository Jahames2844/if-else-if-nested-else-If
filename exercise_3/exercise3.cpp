#include <iostream>
using namespace std;

int main()
{
    int Grade;

    cout << "Input Grade\n";
    cin >> Grade;

    if (Grade >= 90) {
        cout << "Grade: A\n";
        return 1;
    } else if (Grade >= 80 && Grade <= 89) {
        cout << "Grade: B\n";
        return 1;
    } else if (Grade >= 70 && Grade <= 79) {
        cout << "Grade: C\n";
        return 1;
    } else if (Grade >= 60 && Grade <= 69) {
        cout << "Grade: D\n";
        return 1;
    } else {
        cout << "Grade: F\n";
        return 1;
    }
    return 0;
    
}