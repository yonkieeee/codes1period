//
#include <iostream>
using namespace std;
int main()
{
    double x;
    cout << "Enrer x: ";
    cin >> x;
    double zn = 1;
    double ch = 1;
    double res = 0.0;

    for (int i = 1; i <= 6; i++)
    {
        zn *= (x - (pow(2, i)));
    }
    for (int i = 1; i <= 6; i++)
    {
        ch *= (x - ((pow(2, i)) - 1));
    }

    res = ch / zn;

    cout << ch << " " << zn << " " << res;
}