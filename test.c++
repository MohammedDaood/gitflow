#include <iostream>

using namespace std;

void printArrays(int arrays[10])
{
    for (int i = 0; i <= 9; i++)
    {
        cout << i + " ";
    }
}

void ReadArrays(int arrays[10])
{

    for (int i = 0; i <= 9; i++)
    {
        cout << "Enter the Number { " << i + 1 << " }";
        cin >> arrays[i];
    }
}

int main()
{

    int arrays[10];
    ReadArrays(arrays);
    cout << "Your Numbers is : " << endl;
    printArrays(arrays);

    cout << endl;

    return 0;
}
