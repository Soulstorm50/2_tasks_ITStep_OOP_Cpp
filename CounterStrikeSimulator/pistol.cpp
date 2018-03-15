#include "pistol.h"

Pistol::Pistol(): _name("Pistol")
{

}

Pistol::~Pistol()
{

}

void Pistol::action1()
{
    std::cout << " Pistol's shoot! " << std::endl;
}

void Pistol::action2()
{
    std::cout << " Reload " << std::endl;
}

const char* Pistol::getName() const
{
    return _name;
}
