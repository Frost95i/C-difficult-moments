#include <iostream>
#include <iomanip>
#include "exercise_3.hpp"

using namespace std;


void exercise_3()
{
    MyArray arr(5);
    arr.fillRandom();

    for (const int& i : arr)
    {
        cout << setw(5) << i;
    }

    cout << endl;
}