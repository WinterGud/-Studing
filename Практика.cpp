//Завдання 2
#include <iostream>
#include <cstring>

void print(const char* s)
{
    for (size_t i = 0; i < strlen(s); i++)
    {
        std::cout << s[i];
    }
}

void inputString(char* str, size_t maxSize)
{
    std::cin.ignore();
    std::cout << "Введіть рядок: ";
    std::cin.getline(str, maxSize);
}

void Copies(const char* s, char* s1, int n)
{
    size_t length = strlen(s);

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < length; j++)
        {
            s1[i * length + j] = s[j];
        }
    }
    s1[length * n] = '\0';
}

void addressCopies(const char* s, char* s1, int n)
{
    size_t length = strlen(s);

    for (size_t i = 0; i < n; i++)
    {
        const char* src = s;
        char* dest = s1 + i * length;

        while (*src)
        {
            *dest++ = *src++;
        }
    }
    s1[length * n] = '\0';
}

bool program()
{
    std::cout << "Введіть спосіб, яким ви бажаєте виконувати копіювання: ";
    int a;
    std::cin >> a;

    const size_t maxSize = 1000;
    char s[maxSize];
    inputString(s, maxSize);

    int n;
    std::cout << "Введіть кількість копій: ";
    std::cin >> n;

    const size_t outputSize = maxSize * n;
    char* s1 = new char[outputSize];

    if (a == 1)
    {
        Copies(s, s1, n);
        std::cout << "Результат:\n";
        print(s1);
        return true;
    }
    else if (a == 2)
    {
        addressCopies(s, s1, n);
        std::cout << "Результат:\n";
        print(s1);
        return true;
    }
    else
    {
        std::cout << "Сталась помилка. Введіть коректне значення для способу копіювання.\n";
        delete[] s1;
        return false;
    }
    delete[] s1;
    return false;
}

int main()
{
    while (!program())
    {
        program();
    }

    return 0;
}

//Завдання 1
#include <iostream>
#include <fstream>

struct Worker
{
private:
	int days;
	float salaryPerDay;

public:
	int getDays() { return days; }
	float getSalaryPerDay() { return salaryPerDay; }
	int generateDays() { return (rand() % 31) + 1; }
	float generateSalary() { return rand() % 118 + 1; }
	float getSalaryPerMonth() { return salaryPerDay * days / 100 * 80; }
	void setDays(int d) { days = d; }
	void setSalaryPerDay(float salary) { salaryPerDay = salary; }

	friend std::istream& operator>>(std::istream& is, Worker& a)
	{
		std::cout << "Введіть кількість робочих днів працівника: ";
		is >> a.days;
		std::cout << "Введіть плату працівника за день: ";
		is >> a.salaryPerDay;
		return is;
	}

	friend std::ostream& operator<<(std::ostream& os, Worker& a)
	{
		os << "Кількість робочих днів працівника " << a.days << " \tЗаробітня плата за день " << a.salaryPerDay << "\tЗагалом працівник отримав: " << a.getSalaryPerMonth();
		return os;
	}

	void RandData()
	{
		days = generateDays();
		salaryPerDay = generateSalary();
	}
};

struct Unit
{
private:
	int N;
	Worker* arr;

public:
	Unit(int n) : N(n), arr(new Worker[n]) {}

	void RandWork()
	{
		for (int i = 0; i < N; i++)
			arr[i].RandData();
	}

	friend std::ostream& operator<<(std::ostream& os, const Unit& a)
	{
		for (int i = 0; i < a.N; i++)
			os << a.arr[i] << std::endl;
		return os;
	}

	friend std::istream& operator>>(std::istream& is, Unit& a)
	{
		for (int i = 0; i < a.N; i++)
			is >> a.arr[i];
		return is;
	}

	void readFromFile(const std::string& filename)
	{
		std::ifstream file(filename);
		if (file.is_open())
		{
			for (int i = 0; i < N; i++)
			{
				int days;
				float salary;
				file >> days >> salary;
				arr[i].setDays(days);
				arr[i].setSalaryPerDay(salary);
			}
			file.close();
		}
		else
		{
			std::cerr << "Не вдалося відкрити файл: " << filename << std::endl;
		}
	}

	int question()
	{
		int count = 0;
		for (size_t i = 0; i < N; i++)
			if (arr[i].getSalaryPerMonth() >= 50 && arr[i].getSalaryPerMonth() <= 120)
				count++;
		return count;
	}


	~Unit() { delete[] arr; }
};

void inputRand()
{
	Unit Y(15), G(20);
	Y.RandWork();
	G.RandWork();
	std::cout << "Працівники фірми Y:\n" << Y;
	std::cout << "Працівники фірми G:\n" << G;
	std::cout << "У фірмі Y ";
	if (Y.question() == 0)
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. немає.\n";
	else
		std::cout << Y.question() << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. " << G.question() << std::endl;
	std::cout << "У фірмі G ";
	if (G.question() == 0)
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. немає.\n";
	else
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. " << G.question() << std::endl;
}

void inputSolo()
{
	Unit Y(15), G(20);
	std::cout << "Введіть працівників фірми Y\n";
	std::cin >> Y;
	std::cout << "Введіть працівників фірми G\n";
	std::cin >> G;
	std::cout << "Працівники фірми Y:\n" << Y;
	std::cout << "Працівники фірми G:\n" << G;
	std::cout << "У фірмі Y ";
	if (Y.question() == 0)
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. немає.\n";
	else
		std::cout << Y.question() << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. " << G.question() << std::endl;
	std::cout << "У фірмі G ";
	if (G.question() == 0)
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. немає.\n";
	else
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. " << G.question() << std::endl;
}

void inputFromFile()
{
	Unit Y(15), G(20);
	std::cout << "Впишіть назву файлу для фірми У: ";
	std::string fileY, fileG;
	std::cin >> fileY;
	std::cout << "Впишіть назву файлу для фірми G: ";
	std::cin >> fileG;
	Y.readFromFile(fileY);
	G.readFromFile(fileG);
	std::cout << "Працівники фірми Y:\n" << Y;
	std::cout << "Працівники фірми G:\n" << G;
	std::cout << "У фірмі Y ";
	if (Y.question() == 0)
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. немає.\n";
	else
		std::cout << Y.question() << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. " << G.question() << std::endl;
	std::cout << "У фірмі G ";
	if (G.question() == 0)
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. немає.\n";
	else
		std::cout << "працівників які б отримали більше, ніж 50 і менше ніж 120 y.o. " << G.question() << std::endl;
}

void program()
{
	bool work = true;
	std::cout << "Який ви бажаєте вибрати спосіб введення: \n1-випадкові значення\n2-ввід з клавіатури\n3-зчитування з файлу\n";
	int a;
	while (work)
	{
		std::cin >> a;
		switch (a)
		{
		case 1:
			inputRand();
			work = false;
			break;
		case 2:
			inputSolo();
			work = false;
			break;
		case 3:
			inputFromFile();
			work = false;
			break;
		default:
			std::cout << "Ви зробили щось не так. Введіть число наново: \n";
			break;
		}
	}

}

int main()
{
	program();
	return 0;
}
