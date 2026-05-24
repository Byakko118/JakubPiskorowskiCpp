#include <iostream>
#include <string>

std::string GetTextFromUser() {
	std::string text;
	std::getline(std::cin, text);
	return text;
}

std::string ReverseString(std::string text) {
	std::string reversedText;
	for (int i = text.length() - 1; i >= 0; i--) {
		reversedText += text[i];
	}
	return reversedText;
}

int DisplayResult(std::string reversedText) {
	std::cout << "Odwrocony ciag znakow: " << reversedText << std::endl;
	return 0;
}

int main()
{
    std::cout << "Podaj ciag znakow do odwrocenia: ";
	std::string text = GetTextFromUser();
	std::string reversedText = ReverseString(text);
	return DisplayResult(reversedText);
}