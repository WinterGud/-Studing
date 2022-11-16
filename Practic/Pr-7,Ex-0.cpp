#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int length;
    cout << "Ввудіть розмірність масиву: ";
    cin >> length;
    int* Arr = new int[length];
    int k = length / 2;
    for (int i = 0; i < length; i++)
    {
        if (i < length / 2)
        {
            Arr[i] = i + 1;
            cout << Arr[i] << endl;
        }
        else if (i >= +length / 2)
        {
            Arr[i] = k--;
            cout << Arr[i] << endl;
        }
    }

    cout << endl;
    system("pause");
    return 0;
}
