#include <iostream>

// Constructors!!!

class Entity
{
public:
    float X, Y;

    // Constructor, using the class name - no parameters in this example
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
    }

    // without defining a constructor you still have a default constructor that does nothing, ex:
    // Entity()
    // {
    // }

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
    std::cout << e.X << std::endl;
    // calling the print method
    e.Print();
    std::cin.get();
}
