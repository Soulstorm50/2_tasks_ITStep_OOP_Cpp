#ifndef DATADEVICEEDITOR_H
#define DATADEVICEEDITOR_H

#include "DataDeviceEditor/idevice.h"
#include "DataDeviceEditor/cdvddrive.h"
#include "DataDeviceEditor/cportablehdddrive.h"
#include "DataDeviceEditor/cusbdrive.h"
#include <typeinfo>
#include <string>

class DataDeviceEditor
{
public:
    DataDeviceEditor();
    ~DataDeviceEditor();

    void addDevice(IDevice* device);
    void removeDevice(int number);
    void printDevices();
    void modifyDeviceVendorName(int number, std::string vendorName);
    void modifyDeviceModel(int number, std::string model);
    void modifyDeviceName(int number, std::string name);
    void modifyDeviceCapacity(int number, int capacity);
    void modifyDeviceAmount(int number, int amount);

    int findByTypeId(IDevice* device) const;
    int findByTypeId(IDevice* device, const std::string name) const;


private:

    IDevice** _dataDevices;
    int _size;

};

#endif // DATADEVICEEDITOR_H
