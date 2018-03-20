#include "cdvddrive.h"

CDVDDrive::CDVDDrive()
{
    _vendorName = "NO NAME VENDOR DVD Drive";
    _model = "Default model";
    _name = "NO NAME";
    _capacity = 0;
    _amount = 0;
    _writeSpeed = 0;
}

CDVDDrive::~CDVDDrive()
{

}

void CDVDDrive::setVendorName(const std::string& vendorName)
{
    _vendorName = vendorName;
}

void CDVDDrive::setModel(const std::string& model)
{
    _model = model;
}

void CDVDDrive::setName(const std::string& name)
{
    _name = name;
}

void CDVDDrive::setCapacity(int capacity)
{
    _capacity = capacity;
}

void CDVDDrive::setAmount(int amount)
{
    _amount = amount;
}

const std::string& CDVDDrive::getVendorName() const
{
    return _vendorName;
}

const std::string& CDVDDrive::getModel() const
{
    return _model;
}

const std::string &CDVDDrive::getName() const
{
    return _name;
}

int CDVDDrive::getCapacity() const
{
    return _capacity;
}

int CDVDDrive::getAmount() const
{
    return _amount;
}

void CDVDDrive::printDeviceProperties()
{
    std::cout << "==================================================================\n\n"
              << "\t\tDevice properties:\n\n"
              << "\tType:\t\t" << getName() << "\n"
              << "\tVendor:\t\t" << getVendorName() << "\n"
              << "\tModel\t\t" << getModel() << "\n"
              << "\tCapacity:\t\t" << getCapacity() << "Gb\n"
              << "\tAmount\t\t" << getAmount() << "\n"
              << "\tWrite speed:\t\t" << getWriteSpeed() << "Mb/s\n\n"
              << "==================================================================\n";
}

int CDVDDrive::getWriteSpeed() const
{
    return _writeSpeed;
}

void CDVDDrive::setWriteSpeed(int writeSpeed)
{
    _writeSpeed = writeSpeed;
}

void CDVDDrive::setDefault()
{
    _vendorName = "NO NAME VENDOR DVD Drive";
    _model = "Default model";
    _name = "NO NAME";
    _capacity = 0;
    _amount = 0;
    _writeSpeed = 0;
}
