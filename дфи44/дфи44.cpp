#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, R, dx, B, y, a, b, c;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "R = "; cin >> R; 
    cout << fixed;
    cout << "-------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "-------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -1 - R)
            y = R;
        else if (-1 - R < x && x <= -1)
            y = R - sqrt(pow(R, 2) - pow(x + 1, 2)); 
        else if (-1 < x && x <= 2)
            y = -R;
        else
            y = -2 * R + (x - 2) * R / 3;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "-------------------------------" << endl;
    return 0;
}