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

    std::cout << "Liczby nieparzyste od 1 do " << N << ":" << std::endl;
    for (int i = 1; i <= N; ++i) {
        if (i % 2 != 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}