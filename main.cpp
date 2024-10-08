#include <iostream>

// Constructors!!!

class Entity
{
public:
    float X, Y;

    // without defining a constructor you still have a default constructor that does nothing, ex:
    // Entity()
    // {
    // }

    // Constructor with member variables assigned to the parameters
    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    // example print method
    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

// Log class for default constructor removal example
class Log
{
public:
    Log() = delete;

    static void Write()
    {
    }
};

int main()
{
    Log::Write(); // Still has to be like this
    Log l;        // and instances can't be created now because the constructor has been deleted

    // instantiating the Entity class
    Entity e(420.0f, 69.0f); // With the use of member variables assigned to the parameters, you can initalize the values here.
    e.Print();
    std::cin.get();
}
