#include <iostream>

class Entity
{
public:
    float X, Y;
public:
    Entity()
    {
        X = 0.0f; Y = 0.0f;
        std::cout << "Constructed Entity!" << std::endl;
    }

    Entity(float x, float y)
    {
        X = x; Y = y;
    }
    // Destructor
    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};


int main()
{
    Entity e1;
    e1.Print();

    std::cin.get();
    return 0;
}