#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a value for n: " << endl;
    cin >> n;
    int raw[n], i = 0;
    while (i++ < n)
    {
        cout << "Enter a value for " << i << endl;
        cin >> raw[i - 1];
    }
    int sum = 0;
    i = 0;
    while (i++ < n)
    {
        sum += raw[i - 1];
    }
    cout << "The sum of the values is: " << sum << endl;
    cout << "The average of the values is: " << (sum / n) << endl;

    return 0;
}
