#include "cportablehdddrive.h"

CPortableHDDDrive::CPortableHDDDrive()
{
    _vendorName = "NO NAME VENDOR HDD Drive";
    _model = "Default model";
    _name = "NO NAME";
    _capacity = 0;
    _amount = 1;
    _rotationSpeed = 0;
}

CPortableHDDDrive::~CPortableHDDDrive()
{

}

void CPortableHDDDrive::setVendorName(const std::string vendorName)
{
    _vendorName = vendorName;
}

void CPortableHDDDrive::setModel(const std::string model)
{
    _model = model;
}

void CPortableHDDDrive::setName(const std::string name)
{
    _name = name;
}

void CPortableHDDDrive::setCapacity(int capacity)
{
    _capacity = capacity;
}

void CPortableHDDDrive::setAmount(int amount)
{
    _amount = amount;
}

const std::string& CPortableHDDDrive::getVendorName() const
{
    return _vendorName;
}

const std::string& CPortableHDDDrive::getModel() const
{
    return _model;
}

const std::string& CPortableHDDDrive::getName() const
{
    return _name;
}

int CPortableHDDDrive::getCapacity() const
{
    return _capacity;
}

int CPortableHDDDrive::getAmount() const
{
    return _amount;
}

void CPortableHDDDrive::printDeviceProperties()
{
    std::cout << "==================================================================\n\n"
              << "\t\tDevice properties:\n\n"
              << "\tType:\t\t" << getName() << "\n"
              << "\tVendor:\t\t" << getVendorName() << "\n"
              << "\tModel\t\t" << getModel() << "\n"
              << "\tCapacity:\t\t" << getCapacity() << " Gb\n"
              << "\tAmount\t\t" << getAmount() << "\n"
              << "\tRotation speed:\t\t" << getRotationSpeed() << " Rps\n\n"
              << "==================================================================\n";
}

int CPortableHDDDrive::getRotationSpeed() const
{
    return _rotationSpeed;
}

void CPortableHDDDrive::setRotationSpeed(int rotationSpeed)
{
    _rotationSpeed = rotationSpeed;
}

void CPortableHDDDrive::setDefault()
{
    _vendorName = "NO NAME VENDOR HDD Drive";
    _model = "Default model";
    _name = "NO NAME";
    _capacity = 0;
    _amount = 0;
    _rotationSpeed = 0;
}
