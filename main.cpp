#include <iostream>

// Constructors!!!

class Entity
{
public:
    float X, Y;

    // example initializer method
    void Init()
    {
        X = 0.0f;
        Y = 0.0f;
    }

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
    e.Init(); // now initializing the entity
    // Trying to print the X variable, now prints 0
    std::cout << e.X << std::endl;
    // calling the print method
    e.Print(); // now with the init, we see the values being printed correctly

    /* The problem is that now with each new entity you would have to initialize it every time, like so */
    Entity e1;
    e1.Init();

    std::cin.get();
}
