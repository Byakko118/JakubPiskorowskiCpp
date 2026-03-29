#include <iostream>

int main()
{
    int N;

    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    if (std::cin.fail() || N < 2)
    {
        std::cout << "Nieprawid³owa liczba. Podaj liczbê ca³kowit¹ wiêksz¹ lub równ¹ 2." << std::endl;
        return 1;
    }

    std::cout << "Liczby parzyste od 2 do " << N << " to: ";
    int i = 2;
    while (i <= N) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
        i++;
    }
    std::cout << std::endl;

    return 0;
}
