#include <iostream>
#include <string>

// Constructor Member Initializer lists allow you to initializer the class members in the constructor

class Entity
{
private:
    std::string m_Name;

public:
    // Constructor that initializes the name now in a member list
    Entity()
        : m_Name("Unknown") // This member list needs to written in order the variables are defined, otherwise you will cause breaks later on
    {
    }
    // Constructor that takes a name as a param and assing it to the m_Name var
    Entity(const std::string &name)
        : m_Name(name) // You're essentially switch using the '=' to putting the assignment in () and having it in the list instead of the body
    {
    }

    // Constant getter constructor that references the Entity class
    const std::string &GetName() const { return m_Name; }
};

int main()
{
    Entity e0;
    std::cout << e0.GetName() << std::endl; // Showing the initialized name
    Entity e1("AchroDev");
    std::cout << e1.GetName() << std::endl; // Showing the name taken as a parameter

    std::cin.get();
}
