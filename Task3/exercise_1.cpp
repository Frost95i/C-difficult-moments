#include <iostream>
#include "exercise_1.hpp"
using namespace std;

void printList(list<float>& l)
{
    cout << "{ ";

    for (list<float>::const_iterator iter = l.begin(); iter != l.end(); ++iter)
    {
        cout << *iter << (next(iter, 1) == l.end() ? " " : ", ");
    }

    cout << '}' << endl;
}

void pushBackList(list<float>& l)
{
    float sum = 0;

    for (const float& value : l)
    {
        sum += value;
    }

    l.push_back(sum / l.size());
}

void exercise_1()
{
    list<float> l{ 33.11, 45.97, 67.44, 22.22, 32.23 };
    size_t counter = 2;
    printList(l);
    
    for (size_t i = 0; i < counter; ++i)
    {
    
        pushBackList(l);
        printList(l);
    }
    
    
}