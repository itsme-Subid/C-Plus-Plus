#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Armstrong or not
    int n, sum = 0, temp, count = 0;
    cout << "Enter a value for n: ";
    cin >> n;
    temp = n;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    n = temp;
    int ptr = count;
    while (ptr-- != 0)
    {
        int r = n % 10;
        sum += pow(r, count);
        n /= 10;
    }
    if (temp == sum)
    {
        cout << "Amstrong number";
    }
    else
    {
        cout << "Not an amstrong number";
    }

    return 0;
}
