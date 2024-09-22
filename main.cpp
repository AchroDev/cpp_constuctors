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
    // Trying to print the X variable, will not compile as it hasn't been initialized yet
    std::cout << e.X << std::endl;
    // calling the print method
    e.Print(); // currently prints seemingly random values, with no definition/initialization they carry the memory value
    std::cin.get();
}
