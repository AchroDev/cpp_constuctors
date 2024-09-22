#include <iostream>

// Constructors!!!

class Entity
{
public:
    float X, Y;

    // example print method
    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

int main()
{
    // instantiating the Entity class
    Entity e;
    // calling the print method
    e.Print(); // currently prints seemingly random values, with no definition they carry the memory value
    std::cin.get();
}
