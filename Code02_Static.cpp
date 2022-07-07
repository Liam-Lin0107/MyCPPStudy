#include <iostream>

struct Entity
{
    static int x, y;

    void show()
    {
        std::cout << x << ", " << y << std::endl;
    }
};
int Entity::x;
int Entity::y;

int main()
{
    Entity e1;
    Entity e2;

    e1.show();
    e2.show();
}
