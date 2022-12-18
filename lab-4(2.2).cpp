#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

const int numOfStudents = 6;

int main() {
	
	std::fstream file("input_data", std::ios::in | std::ios::out);
	if (!file)
	{
		std::cout << "ERROR";
		return 1;
	}

	char text[1000];
	std::cout << "Enter text: ";
	std::cin >> text;
	file << text << std::endl;
	int fs = 0;
	char ch;
	for (int i = 0; i < strlen(text); i++)
	{
		if (file.ignore(strlen(text), '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9'))
		{
			file.ignore(strlen(text), '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9');
			file.get(ch);
			fs += 1;
		}
	}
	std::cout << "Number in text: " << fs;
	file.close();

	std::cout << std::endl;
	return 0;
}
