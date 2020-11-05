#include <iostream>
using namespace std;

int main()
{
    double x;
    double a;
    double b;
    double c;
    double F;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "x = ";
    cin >> x;
    
    // 1 Спосіб

    if (x < 0 && b != 0) 
    {
        F = a - x / (10 + b);
    }
    if (x > 0 && b == 0) 
    {
        F = (x - a) / (x - c);
    }
    else 
    {
        F = 3 * x + 2 / c;
    }
    cout << "F = " << F<<endl;

    // 2 Спосіб

    if (x < 0 && b != 0) 
    {
        F = a - x / (10 + b);
    }
    else 
    {
        if (x > 0 && b == 0) 
        {
            F = (x - a) / (x - c);
        }
        else 
        {
            F = 3 * x + 2 / c;
        }

    }
    cout << "F = " << F;

    cin.get();
    return 0;
}
