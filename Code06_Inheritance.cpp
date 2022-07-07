// Inheritance is basically use to reduce copying same code.
// public inheritance is "is a" concept
// private inheritance is "has a" concept e.g. a car doesn't need to pouring the gasoline.
// car only need to trigger the entire engine.
#include <iostream>

class Entity
{
public:
    float X, Y;
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Constructor called!" << std::endl;
    }
public:
    void move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity // initialize Entity by call argument-less constructor
{
public:
    const char* name;
public:
    Player(const char* name)
    {
        this->name = name;
    }
public:
    void PrintName()
    {
        std::cout << name << std::endl;
    }
};

int main()
{
    Player p1("lnaslcnalkncklanlvnlawnv");
    p1.move(2.0f, 3.3f);

    p1.PrintName();
    std::cout << p1.X << ", " << p1.Y << std::endl;

    std::cout << "size: " << sizeof(p1) << std::endl; // pointer 8 byte(64 bit machine), float 4 byte

    std::cin.get();
    return 0;
}
