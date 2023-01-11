#include <iostream>
#include <fstream>
#include <string>
struct toys
{
    char name[80];
    int price, maxAge;
};

int main() {



    int num = 3;
    toys toy;

    std::fstream io("file" , std::ios::in | std::ios::out | std::ios::binary);
    if (!io) { std::cout << "ERROR"; return -1; }

    for (int i = 0; i < num; i++)
    {
        std::cin >> toy.name >> toy.price >> toy.maxAge;
        io << toy.name << ' ' << toy.price << ' ' << toy.maxAge << std::endl;
    }
    io.close();

    io.open("file", std::ios::in | std::ios::out | std::ios::binary);

    for (int i = 0; i < num; i++)
    {
        io >> toy.name >> toy.price >> toy.maxAge;
        std::cout << toy.name << ' ' << toy.price << ' ' << toy.maxAge << '\n';
    }

    io.close();
    std::fstream io_toy("toys", std::ios::in | std::ios::out | std::ios::binary);
    if (!io_toy) { std::cout << "ERROR"; return -1; }
    io.open("file", std::ios::in | std::ios::out | std::ios::binary);

    for (int i = 0; i < num; i++)
    {
        io >> toy.name >> toy.price >> toy.maxAge;
        if (toy.price <= 20 && toy.maxAge < 5)
        {
            
            io_toy << toy.name << ' ' << toy.price << ' ' << toy.maxAge << std::endl;
        }
    }
    io.close();
    io_toy.close();

    


    return 0;
}
