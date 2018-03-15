#include "smokegranade.h"

SmokeGranade::SmokeGranade(): _name("Smokegrenade")
{

}

SmokeGranade::~SmokeGranade()
{

}

void SmokeGranade::action1()
{
    std::cout << " Drop the smoke granade! " << std::endl;
}

void SmokeGranade::action2()
{
    std::cout << " Hand change. Now smoke granade in other hand! " << std::endl;
}

const char* SmokeGranade::getName() const
{
    return _name;
}
