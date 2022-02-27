#pragma once

class MyArray {
    int* array;
    int size;
public:
    MyArray(int size) : size(size) {
        array = new int[size];
    };
    class Iterator
    {
    private:
        int* current;
    public:
        Iterator(int* pointer) : current(pointer) { }
        int& operator[](size_t i) { return *(current + i); };
        Iterator& operator ++() {
            ++current;
            return *this;
        };
        bool operator !=(const Iterator& iterator) { return current != iterator.current; };
        int& operator *() { return *current; };
        ~Iterator() {}
    };
    Iterator operator[](size_t i) { return Iterator(array); };
    Iterator begin() { return Iterator(array); };
    Iterator end() { return Iterator(array + size); };

    void fillRandom() {
        for (size_t i = 0; i < size; i++)
        {
            array[i] = rand() % 10;
        }
    }
    ~MyArray() {
        delete[] array;
    }
};




void exercise_3();