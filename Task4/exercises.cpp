#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>
#include <random>
#include <iterator>
#include "exercises.hpp"

using namespace std;

template<template<typename, typename> class TContainer, typename TItem, typename TIterator, typename T>
void generator(TContainer<TItem, TIterator>& c, const T& rangeStart, const T& rangeEnd)
{
    std::random_device rd;
    std::mt19937 mersenne(rd());
    std::uniform_real_distribution<double> urd(rangeStart, rangeEnd);
    generate(c.begin(), c.end(), [&]()
        {
            return urd(mersenne);
        });
}

template<template<typename, typename> class TContainer, typename TItem, typename TIterator>
void print(const TContainer<TItem, TIterator>& c)
{
    copy(c.begin(), c.end(), std::ostream_iterator<TItem> { std::cout, " " });
    std::cout << std::endl;
}

template<template<typename, typename> class TContainer, typename TItem, typename TIterator>
void insert_sorted(TContainer<TItem, TIterator>& c, const TItem& i)
{
    typename TContainer<TItem, TIterator>::iterator it = find_if(c.begin(), c.end(), [&](const TItem& current)
        {
            return current >= i;
        });
    c.insert(it, i);
}


using namespace std;

void exercise_1()
{
    const unsigned int size = 10;
    int newIntValue = -3;
    double newDoubleValue = 2.2;

    vector<int> v(size);
    generator(v, -100, 100);
    sort(v.begin(), v.end());
    print(v);                             
    insert_sorted(v, newIntValue);
    print(v);                             

    cout << endl;

    list<double> l(size);
    generator(l, -10.0, 10.0);
    l.sort();
    print(l);                            
    insert_sorted(l, newDoubleValue);
    print(l);                             

    cout << endl;
}

void exercise_2()
{
    vector<double> v(100);

    double error = 0;
    generator(v, -100.0, 100.0);

    print(v);                                                          // 1-ый вектор - вывод исходного вектора
    copy(v.begin(), v.end(), ostream_iterator<int> { cout, " " });     // 2-ой вектор - вывод целочисленного вектора

    cout << endl;

    for_each(v.begin(), v.end(), [&](const double& i)
        {
            error += pow(i - static_cast<int>(i), 2);
        });

    cout << endl << "Ошибка между цифровым и аналоговым сигналом равна " << error << endl;
}
