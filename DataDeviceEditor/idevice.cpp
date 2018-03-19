#include "idevice.h"

IDevice::~IDevice()
{

}

void IDevice::load()
{
    std::cout << "Data loaded!" << std::endl;
}

void IDevice::save()
{
    std::cout << "Data saved!" << std::endl;
}
