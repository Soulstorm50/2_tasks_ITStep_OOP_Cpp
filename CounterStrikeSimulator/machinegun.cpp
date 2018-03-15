#include "machinegun.h"

Machinegun::Machinegun(): _name("Machinegun")
{

}

Machinegun::~Machinegun()
{

}

void Machinegun::action1()
{
    std::cout << " Machinegun shot " << std::endl;
}

void Machinegun::action2()
{
    std::cout << " Single machinegun shot " << std::endl;
}

const char* Machinegun::getName() const
{
    return _name;
}
