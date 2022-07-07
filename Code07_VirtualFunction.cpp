// If we don't use the virtual the polymorphism will use the base class method.
// The result we don't want to see.
// The basic rule is if you want to override a method, make the base class
// method to be virtual and put the override keyword to the derived class's
// method.
// The cons of the virtual function
// 1. Need to use extra memory to store vtable.
// 2. In the runtime the based class method need to point to the derived class's
//    method. It's an extra cost.

#include <iostream>
#include <string>

class Entity
{
public:
    virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    explicit Player(const std::string& name)
        : m_Name(name) {}
    std::string GetName() override { return m_Name; }
};

static void PrintName(Entity* e)
{
    std::cout << e->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    std::cin.get();
    return 0;
}
