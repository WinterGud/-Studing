#include <iostream>
#include <string>
#include <locale>

std::string to_camel_case(std::string text) {
	std::locale loc;
	if (text == "") return "";
	else {
		for (int i = 0; i < size(text); i++) {
			if ((text[i] == '_') || (text[i] == '-') || (text[i] == ' ')) {
				char a = std::toupper(text[i + 1], loc);
				text[i + 1] = a;
				text.erase(i, 1);
			}
		}
		return text;
	}
}

int main() {

	std::cout << to_camel_case("Convert string to camel case") << std::endl;
	

	return 0;
}
