#include <iostream>

int main()
{
    double x, y;
    std::cout << "Введіть координати точки\n";
    std::cin >> x >> y;
    bool res = false;
    if (x * x + y * y > 4) res = false;
    else if (x * y > 0)
        if (abs(x) + abs(y) >= 2) res = true;
        else res = false;
    else if (abs(x) + abs(y) <= 2) res = true;
    else res = false;
    if (res == true) std::cout << "Точка належить заштрихованій частині";
    else std::cout << "Точка не належить заштрихованій частині";
}
