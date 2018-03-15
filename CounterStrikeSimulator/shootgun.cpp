#include "shootgun.h"

Shootgun::Shootgun(): _name("Shootgun")
{

}

Shootgun::~Shootgun()
{

}

void Shootgun::action1()
{
    std::cout << " Shotgun shot! " << std::endl;
}

void Shootgun::action2()
{
    std::cout << " Reload shotgun! " << std::endl;
}

const char* Shootgun::getName() const
{
    return _name;
}
