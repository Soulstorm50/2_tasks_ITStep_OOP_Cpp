#include "knife.h"

Knife::Knife(): _name("Knife")
{

}

Knife::~Knife()
{

}

void Knife::action1()
{
    std::cout << " Hit the knife! " << std::endl;
}

void Knife::action2()
{
    std::cout << " Hand change. Now knife in other hand! " << std::endl;
}

const char* Knife::getName() const
{
    return _name;
}
