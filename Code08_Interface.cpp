// The method in the based class isn't have implementation.
// The method is call pure virtual method.
// Then the based class become abstract class witch can't
// instantiate.
#include <iostream>
#include <string>
class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    virtual std::string GetName() { return "Entity"; }
    std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}
public:
    virtual std::string GetName() { return m_Name; }
    std::string GetClassName() override { return m_Name; }
};

class A : public Printable
{
    std::string GetClassName() override { return "A"; }
};

static void Print(Printable* obj)
{
    std::cout << obj->GetClassName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    Player* p = new Player("Liam");
    Print(e);
    Print(p);
    Print(new A()); // it's not good because the memory can not delete.
}