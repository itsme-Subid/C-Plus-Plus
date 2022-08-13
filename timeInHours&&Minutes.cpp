#include <iostream>

using namespace std;

int main()
{
    int min = 0;
    cout << "Enter time in Minutes" << endl;
    cin >> min;
    int hours = min / 60;
    int minutes = min % 60;
    cout << hours << " hours " << minutes << " minutes" << endl;

    return 0;
}
