#include <iostream>
#include <string>

int main() {

    int num; std::cin >> num;
    num = 1000;
    double* arr = new double[num];
    for (int i = 0; i < num ; i++)
    {
        arr[i] = rand();
    }
     
    double* arrNext = new double[num];
    for (int i = 0; i < num; i++)
    {
        arrNext[i + 1] = arr[i] + arr[i + 2];
    }
    //я незнаю як воно запустилось -_-

    int k; std::cin >> k;
    for (int i = 0; i < num; i++)
    {
        if (arrNext[i] > k) {
            std::cout << arrNext[i] << ' ' << i << std::endl;
        }
    }

    



    return 0;
}
