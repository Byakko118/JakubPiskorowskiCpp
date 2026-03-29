#include <iostream>

int main()
{
    int width, height;
    std::cout << "Podaj szerokosc: ";
    std::cin >> width;
    std::cout << "Podaj wysokosc: ";
    std::cin >> height;

    if (std::cin.fail() || width < 2 || height < 1 || width < 2 * (height - 1) + 2) {
        std::cout << "Podano nieprawidlowa liczbe." << std::endl;
        return 1;
    }

    int margin = 0;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (j >= margin && j < width - margin) {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
        margin++;
    }

    return 0;
}