#include "cusbdrive.h"

CUSBDrive::CUSBDrive()
{
    _vendorName = "NO NAME VENDOR USB Drive";
    _model = "Default model";
    _name = "NO NAME";
    _capacity = 0;
    _amount = 1;
    _USBSpeed = 0;
}

CUSBDrive::~CUSBDrive()
{

}

void CUSBDrive::setVendorName(const std::string vendorName)
{
    _vendorName = vendorName;
}

void CUSBDrive::setModel(const std::string model)
{
    _model = model;
}

void CUSBDrive::setName(const std::string& name)
{
    _name = name;
}

void CUSBDrive::setCapacity(int capacity)
{
    _capacity = capacity;
}

void CUSBDrive::setAmount(int amount)
{
    _amount = amount;
}

const std::string& CUSBDrive::getVendorName() const
{
    return _vendorName;
}

const std::string& CUSBDrive::getModel() const
{
    return _model;
}

const std::string& CUSBDrive::getName() const
{
    return _name;
}

int CUSBDrive::getCapacity() const
{
    return _capacity;
}

int CUSBDrive::getAmount() const
{
    return _amount;
}

void CUSBDrive::printDeviceProperties()
{
    std::cout << "==================================================================\n\n"
              << "\t\tDevice properties:\n\n"
              << "\tType:\t\t" << getName() << "\n"
              << "\tVendor:\t\t" << getVendorName() << "\n"
              << "\tModel\t\t" << getModel() << "\n"
              << "\tCapacity:\t\t" << getCapacity() << " Gb\n"
              << "\tAmount\t\t" << getAmount() << "\n"
              << "\tUSB speed:\t\t" << getUSBSpeed() << "Mb/s\n\n"
              << "==================================================================\n";
}

int CUSBDrive::getUSBSpeed() const
{
    return _USBSpeed;
}

void CUSBDrive::setUSBSpeed(int USBSpeed)
{
    _USBSpeed = USBSpeed;
}

void CUSBDrive::setDefault()
{
    _vendorName = "NO NAME VENDOR USB Drive";
    _model = "Default model";
    _name = "NO NAME";
    _capacity = 0;
    _amount = 0;
    _USBSpeed = 0;
}
