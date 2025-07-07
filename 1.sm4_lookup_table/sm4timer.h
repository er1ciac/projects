#include <chrono>
#include <iostream>
#include <string>

class Timer
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
    std::string name;

public:
    Timer(const std::string &name) : name(name)
    {
        start_time = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        auto end_time = std::chrono::high_resolution_clock::now();
        double duration = std::chrono::duration<double, std::milli>(end_time - start_time).count();
        std::cout << name << " took " << duration << " ms" << std::endl;
    }
};