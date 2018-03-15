#include "sniperriffle.h"

SniperRiffle::SniperRiffle(): _name("Sniperriffle")
{

}

SniperRiffle::~SniperRiffle()
{

}

void SniperRiffle::action1()
{
    std::cout << " Sniperrifle shot! " << std::endl;
}

void SniperRiffle::action2()
{
    std::cout << " Take aim! " << std::endl;
}

const char* SniperRiffle::getName() const
{
    return _name;
}
