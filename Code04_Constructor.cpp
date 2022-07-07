#include <iostream>
class Entity
{
public:
    float x, y;

    Entity()
    {
        x = 0.0f; y = 0.0f;
    }
    Entity(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    void Print()
    {
        std::cout << x << ", " <<y << std::endl;
    }
};

// remove constructor
// when a class only have static method
// we don't want user to construct the object
// but c++ has default constructor so there are two ways
// 1. put constructor into private
// 2. delete（C++11）
class Log
{
    // method 1
//private:
//    Log()
//    {}
public:
    Log() = delete; // method 2: recommend !!
    static void Write(const char* message)
    {
        std::cout << message << std::endl;
    }
};


int main()
{
    Entity e1;
    e1.Print();

    Entity e2 = {2.2f, 3.2f}; // 注意若聲明了explicit 就不能這樣調用constructor
    e2.Print();

    Entity e3(2.53f, 2.63f);
    e3.Print();

    //Log log; //can't initiate
    Log::Write("Hello");

    std::cin.get();
    return 0;
}