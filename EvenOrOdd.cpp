#include <iostream>

using namespace std;

int main()
{
    // even or odd
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2)
        cout << "The number is odd" << endl;
    else
        cout << "The number is even" << endl;
    return 0;
}
