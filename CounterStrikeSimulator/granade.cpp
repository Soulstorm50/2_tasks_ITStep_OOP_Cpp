#include "granade.h"

Granade::Granade(): _name("Granade")
{

}

Granade::~Granade()
{

}

void Granade::action1()
{
    std::cout << " Drop the granade! " << std::endl;
}

void Granade::action2()
{
    std::cout << " Hand change. Now granade in other hand! " << std::endl;
}

const char* Granade::getName() const
{
    return _name;
}
