#include <iostream>

using namespace std;

int main()
{
    // reverse a number
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Reversed number: ";
    while (number)
    {
        cout << number % 10;
        number /= 10;
    }
    cout << endl;
    return 0;
}
