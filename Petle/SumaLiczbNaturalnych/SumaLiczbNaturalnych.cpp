#include <iostream>

int main()
{
    int N;

    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    if (std::cin.fail() || N < 1)
    {
        std::cout << "Nieprawid³owa liczba. Podaj liczbê ca³kowit¹ wiêksz¹ lub równ¹ 1." << std::endl;
        return 1;
    }

    int suma = 0;
    int i = 1;
    while (i <= N) {
        suma += i;
        i++;
    }

    std::cout << "Suma liczb naturalnych do " << N << ": " << suma << std::endl;
}