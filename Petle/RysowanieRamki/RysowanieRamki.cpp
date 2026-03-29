#include <iostream>

int main()
{
    int width, height;
    std::cout << "Podaj szerokosc: ";
    std::cin >> width;
    std::cout << "Podaj wysokosc: ";
    std::cin >> height;

    if (std::cin.fail() || width < 2 || height < 2) {
        std::cout << "Podano nieprawidlowa liczbe." << std::endl;
        return 1;
    }

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}