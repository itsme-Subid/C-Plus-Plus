#include <iostream>

using namespace std;

int main()
{
    // factorial
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    int factorial = 1;
    int p = n;
    while (n > 0)
    {
        factorial *= n;
        n--;
    }
    cout << "The factorial of " << p << " is " << factorial << endl;

    return 0;
}
