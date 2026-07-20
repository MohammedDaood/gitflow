#include <iostream>

using namespace std;

void printArrays(int arrays[10])
{
    for (int i = 0; i <= 9; i++)
    {
        cout << i + " ";
    }
}

int main()
{

    int arrays[10] = {12, 32, 32, 3, 21, 1, 1, 1, 3, 2};

    printArrays(arrays);

    cout << endl;

    return 0;
}
