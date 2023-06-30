#include <iostream>
#include <cmath>
int main()
{
    float a, b, c;
    double discriminant, x1, x2;
    std::cin >> a >> b >> c;
    if (a == 0) {
        std::cout << "Error: a = 0\n";
        return 1;
    }

    if (std::abs(a) > 100 || std::abs(b) > 100 || std::abs(c) > 100)
    {
        std::cout << "Values exceeding 100\n";
        return 1;
    }
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        if (x1 < x2)
            std::cout << "Two roots: " << x1 << " " << x2;
        else
            std::cout << "Two roots: " << x2 << " " << x1;
    }
    else if (discriminant == 0) {

        x1 = -b / (2 * a);
        std::cout << "One root: " << x1;
    }
    else {

        std::cout << "No roots";
    }
    return 0;
}