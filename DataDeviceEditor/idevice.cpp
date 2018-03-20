#include "idevice.h"

IDevice::~IDevice()
{

}

void IDevice::load()
{
    std::cout << std::endl << "Loading";
    Sleep(1000);
    std::cout << "...";
    Sleep(1000);
    std::cout << "...";
    Sleep(1000);
    std::cout << "...";
    Sleep(1000);
    std::cout << " Data loaded!" << std::endl;
}

void IDevice::save()
{
    std::cout << std::endl << "Saving";
    Sleep(1000);
    std::cout << "...";
    Sleep(1000);
    std::cout << "...";
    Sleep(1000);
    std::cout << "...";
    Sleep(1000);
    std::cout << " Data Saved!" << std::endl;
}
