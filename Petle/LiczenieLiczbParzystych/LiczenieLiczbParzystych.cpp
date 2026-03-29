#include <iostream>

int main()
{
    int N;
    std::cout << "Podaj liczbe calkowita dodatnia N: ";
    std::cin >> N;

    if (std::cin.fail() || N < 1) {
        std::cout << "Nieprawidlowa liczba. Podaj liczbe calkowita dodatnia." << std::endl;
        return 1;
    }

    int licznikParzystych = 0;
    int i = 1;

    do {
        if (i % 2 == 0) {
            licznikParzystych++;
        }
        i++;
    } while (i <= N);

    std::cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << licznikParzystych << std::endl;

    return 0;
}