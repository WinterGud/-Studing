#include <iostream>
#include <string>

int main() {

    int arr[19][36];
    for (int i = 0; i < 19; i++)
    {
        for (int n = 0; n < 36; n++)
        {
            arr[i][n] = rand();
            arr[0][n] = 0;
        }
    }
    for (int i = 0; i < 19; i++)
    {
        for (int n = 0; n < 36; n++)
        {
            if (arr[i][n] % 2 == 0) arr[i][n] = 0;
            else if (arr[i][n] % 2 != 0) arr[i][n] = 1;
        }
    }

    int vagon; std::cin >> vagon;
    if (vagon == 0) std::cout << "Нульовий вагон? "; return -1;
    int freePlace = 0;
    for (int n = 0; n < 36; n++)
    {
        if (arr[vagon][n] == 0) freePlace += 1;
    } std::cout << freePlace;






    return 0;
}
