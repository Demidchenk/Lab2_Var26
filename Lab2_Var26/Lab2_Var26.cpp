#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Введіть координати точки\n";
    cin >> x >> y;
    bool res = false;
    if (x * x + y * y > 4) res = false;
    else if (x * y > 0)
        if (abs(x) + abs(y) >= 2) res = true;
        else res = false;
    else if (abs(x) + abs(y) <= 2) res = true;
    else res = false;
    if (res) cout << "Точка належить заштрихованій частині";
    else cout << "Точка не належить заштрихованій частині";
}
