#include <iostream>

int main()
{
    int count = 0;
    for (int a = 1; a <= 9; ++a) {
        for (int b = 0; b <= 9; ++b) {
            if (b == a) continue;
            for (int c = 0; c <= 9; ++c) {
                if (c == a || c == b) continue;
                std::cout << a << b << c << std::endl;
                count++;
            }
        }
    }
    std::cout << "Liczb bez powtarzajacych sie cyfr: " << count << std::endl;
    return 0;
}