#include <iostream>

int main()
{
    int N;
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    if (std::cin.fail() || N < 1) {
        std::cout << "Podano nieprawidlowa liczbe." << std::endl;
        return 1;
    }

    for (int a = 1; a <= N; ++a) {
        for (int b = 1; b <= N; ++b) {
            std::cout << a << " * " << b << " = " << (a * b) << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}