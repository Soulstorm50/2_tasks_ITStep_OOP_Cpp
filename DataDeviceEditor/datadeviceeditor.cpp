#include "datadeviceeditor.h"

DataDeviceEditor::DataDeviceEditor(): _size(3)
{
    _dataDevices = new IDevice* [3];
    _dataDevices[0] = new CDVDDrive();
    _dataDevices[1] = new CUSBDrive();
    _dataDevices[2] = new CPortableHDDDrive();

    for(int i = 0; i < _size; i++)
    {
        _dataDevices[i]->setAmount(0);
    }
}

DataDeviceEditor::~DataDeviceEditor()
{
    delete[] _dataDevices;
}

void DataDeviceEditor::addDevice(IDevice &device)
{
    int tempAmount = 0;
    if(typeid(device).name() == typeid(CDVDDrive).name())
    {
        tempAmount = _dataDevices[0]->getAmount() + device.getAmount();
        delete _dataDevices[0];
        _dataDevices[0] = &device;
        _dataDevices[0]->setAmount(tempAmount);
    }
    else if(typeid(device).name() == typeid(CUSBDrive).name())
    {
        tempAmount = _dataDevices[1]->getAmount() + device.getAmount();
        delete _dataDevices[1];
        _dataDevices[1] = &device;
        _dataDevices[1]->setAmount(tempAmount);
    }
    else if(typeid(device).name() == typeid(CPortableHDDDrive).name())
    {
        tempAmount = _dataDevices[2]->getAmount() + device.getAmount();
        delete _dataDevices[2];
        _dataDevices[2] = &device;
        _dataDevices[2]->setAmount(tempAmount);
    }
}

void DataDeviceEditor::removeDevice(int number)
{
    if(number < 1 || number > _size)
    {
        std::cout << "\n\nError! wrong device number!\n\n";
    }
    else
    {
        int tempAmount = _dataDevices[number - 1]->getAmount();
        if(tempAmount > 1)
        {
            _dataDevices[number - 1]->setAmount(--tempAmount);
        }
        else if(tempAmount <= 1)
        {
            _dataDevices[number - 1]->setDefault();
        }
    }
}

void DataDeviceEditor::printDevices()
{
    std::cout << "\n=================== List of devices begining =====================\n\n";

    for(int i = 0; i < _size; i++)
    {
        _dataDevices[i]->printDeviceProperties();
    }

    std::cout << "\n=================== List of devices end ==========================\n";
}

void DataDeviceEditor::modifyDeviceVendorName(int number, std::string vendorName)
{
    if(number < 1 || number > _size)
    {
        std::cout << "\n\nError! wrong device number!\n\n";
    }
    else
    {
        _dataDevices[number - 1]->setVendorName(vendorName);
    }
}

void DataDeviceEditor::modifyDeviceModel(int number, std::string model)
{
    if(number < 1 || number > _size)
    {
        std::cout << "\n\nError! wrong device number!\n\n";
    }
    else
    {
        _dataDevices[number - 1]->setModel(model);
    }
}

void DataDeviceEditor::modifyDeviceName(int number, std::string name)
{
    if(number < 1 || number > _size)
    {
        std::cout << "\n\nError! wrong device number!\n\n";
    }
    else
    {
        _dataDevices[number - 1]->setName(name);
    }
}

void DataDeviceEditor::modifyDeviceCapacity(int number, int capacity)
{
    if(number < 1 || number > _size)
    {
        std::cout << "\n\nError! wrong device number!\n\n";
    }
    else
    {
        _dataDevices[number - 1]->setCapacity(capacity);
    }
}

void DataDeviceEditor::modifyDeviceAmount(int number, int amount)
{
    if(number < 1 || number > _size)
    {
        std::cout << "\n\nError! wrong device number!\n\n";
    }
    else
    {
        _dataDevices[number - 1]->setAmount(amount);
    }
}

int DataDeviceEditor::findByTypeId(IDevice& device) const
{
    int result = -1;
    if(typeid(device).name() == typeid(CDVDDrive).name())
    {
        result = 1;
    }
    else if(typeid(device).name() == typeid(CUSBDrive).name())
    {
        result = 2;
    }
    else if(typeid(device).name() == typeid(CPortableHDDDrive).name())
    {
        result = 3;
    }
    return result;
}

int DataDeviceEditor::findByTypeId(IDevice& device, const std::string name) const
{
    int result = -1;
    if(typeid(device).name() == typeid(CDVDDrive).name())
    {
        if(_dataDevices[0]->getName() == name)
        {
            result = 1;
        }
    }
    else if(typeid(device).name() == typeid(CUSBDrive).name())
    {
        if(_dataDevices[1]->getName() == name)
        {
            result = 2;
        }
    }
    else if(typeid(device).name() == typeid(CPortableHDDDrive).name())
    {
        if(_dataDevices[2]->getName() == name)
        {
            result = 3;
        }
    }
    return result;
}


