#include <iostream>

using namespace std;

int main()
{
    // check prime or not
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    int i = 1, prime = 0;
    while (i++ < n / 2)
    {
        if (n % i == 0)
        {
            prime += 1;
        }
    }
    if (prime == 0)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}
