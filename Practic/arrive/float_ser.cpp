#include <iostream>
#include <string>

int main() {

    int num; std::cin >> num;
    num = 100;
    double* arr = new double[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = rand() - rand() / 2;
    }
    
    double ser = 0;
    for (int i = 0; i < num; i++)
    {
        ser += arr[i];
    }
    ser /= num; std::cout << ser << std::endl;

    ser = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == 0) continue;
        if(arr[i] > 0) ser += num / (1 / arr[i]);
    } std::cout << ser << std::endl;

    ser = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < 0) ser *= arr[i];
    } std::cout << sqrt(ser) << std::endl;


    



    return 0;
}
