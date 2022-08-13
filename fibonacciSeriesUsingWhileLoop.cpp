#include <iostream>

using namespace std;

int main()
{
    // fibonacci sequence
    int n = 0, a = 0, b = 1, c = 0, i = -1;
    cout << "Enter a value for n: ";
    cin >> n;
    cout << a << " " << b << " ";
    while (i++ < n)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }

    return 0;
}
