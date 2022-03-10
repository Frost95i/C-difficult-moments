#pragma once

#include <iostream>
#include <thread>
#include <mutex>

static std::mutex mtx_cout;

class pcout
{
private:
    std::lock_guard<std::mutex> lg;
public:
    pcout() : lg(std::lock_guard<std::mutex>(mtx_cout))
    {
    }

    template<typename T>
    pcout& operator<<(const T &data)
    {
        std::cout << data;
        return *this;
    }

    pcout& operator<<(std::ostream& (*fp)(std::ostream&))               
    {                                                                    
        std::cout << fp;                                                
        return *this;                                                    
    }                                                                   
};

void doSomething(int number)
{
    pcout() << "start thread " << number << std::endl;
    pcout() << "stop thread " << number << std::endl;
}

void exercise_1()
{
    std::thread thr1(doSomething, 1);
    std::thread thr2(doSomething, 2);
    std::thread thr3(doSomething, 3);
    thr1.join();
    thr2.join();
    thr3.join();
}
