#include <iostream>

int main()
{
	int a = 5;
	int b = 10;

	int* wskA = &a;
	int* wskB = &b;

	std::cout << "Przed modyfikacja:" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	*wskA = 15;
	*wskB = 20;

	std::cout << std::endl << "Po modyfikacji:" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	return 0;
}
