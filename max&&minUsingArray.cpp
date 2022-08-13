#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    int raw[n], i = 0;
    while (i++ < n)
    {
        cout << "Enter a value for " << i << ": ";
        cin >> raw[i - 1];
    }
    int max = 0, min = 0;
    while (i-- > 0)
    {
        if (n == 1)
        {
            max = raw[0];
            min = raw[0];
        }
        else if (n <= 0)
        {
            max = 0, min = 0;
        }
        else
        {
            if (raw[i + 1] > raw[i])
            {
                max = raw[i + 1];
                min = raw[i];
            }
            else if (raw[i] > raw[i + 1])
            {
                max = raw[i];
                min = raw[i + 1];
            }
            else if (raw[i + 1] == raw[i])
            {
                max = raw[i];
                min = raw[i];
            }
        }
    }
    cout << "The maximum value is: " << max << endl;
    cout << "The minimum value is: " << min << endl;

    return 0;
}
