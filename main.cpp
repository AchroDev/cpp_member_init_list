#include <iostream>
#include <string>

// Constructor Member Initializer lists allow you to initializer the class members in the constructor

class Entity
{
private:
    std::string m_Name;

public:
    // Constructor that initializes the name
    Entity()
    {
        m_Name = "Unknown";
    }
    // Constructor that takes a name as a param and assing it to the m_Name var
    Entity(const std::string &name)
    {
        m_Name = name;
    }
    const std::string &GetName() const { return m_Name; }
};

int main()
{

    std::cin.get();
}
