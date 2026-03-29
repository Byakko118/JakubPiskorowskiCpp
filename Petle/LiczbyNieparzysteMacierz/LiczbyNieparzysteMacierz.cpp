#include <iostream>
#include <iomanip>

int main()
{
    int rows, cols;
    std::cout << "Podaj liczbe wierszy: ";
    std::cin >> rows;
    std::cout << "Podaj liczbe kolumn: ";
    std::cin >> cols;

    if (std::cin.fail() || rows < 1 || cols < 1) {
        std::cout << "Podano nieprawidlowa liczbe." << std::endl;
        return 1;
    }

    int odd = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << std::setw(4) << odd;
            odd += 2;
        }
        std::cout << std::endl;
    }

    return 0;
}