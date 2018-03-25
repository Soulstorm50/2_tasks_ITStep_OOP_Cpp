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

void DataDeviceEditor::addDevice(IDevice* device)
{
    int tempAmount = 0;
    for(int i = 0; i < _size; i++)
    {
        if(typeid(device) == typeid(_dataDevices[i]))
        {
            tempAmount = _dataDevices[i]->getAmount() + device->getAmount();
            delete _dataDevices[i];
            _dataDevices[i] = device;
            _dataDevices[i]->setAmount(tempAmount);
            break;
        }
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
        _dataDevices[number]->setVendorName(vendorName);
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
        _dataDevices[number]->setModel(model);
    }
}


