#include <iostream>

int main()
{
    int N;
    std::cout << "Podaj liczbê N: ";
    std::cin >> N;

    if (std::cin.fail() || N < 1) {
        std::cout << "Podano nieprawid³owa liczbe." << std::endl;
        return 1;
    }

    int suma = 0;
    for (int i = 1; i <= N; ++i) {
        suma += i;
    }

    std::cout << "Suma liczb od 1 do " << N << " wynosi: " << suma << std::endl;
    return 0;
}