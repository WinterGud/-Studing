#include <iostream>
#include <string>

int main() {

    int a, b; std::cin >> a >> b;
	int result = 0;
	if (a > b)
	{
		for (int i = 1; i < b; i++)
		{
			if (a % i == 0 && b % i == 0) result = i;
		}
	}
	else if (b > a)
	{
		for (int i = 1; i < a; i++)
		{
			if (a % i == 0 && b % i == 0) result = i;
		}
	}
	std::cout << result;



    return 0;
}
