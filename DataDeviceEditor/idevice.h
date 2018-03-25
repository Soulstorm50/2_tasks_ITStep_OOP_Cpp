#ifndef IDEVICE_H
#define IDEVICE_H

#include <string>
#include <iostream>
#include <windows.h>

class IDevice
{
public:
    virtual ~IDevice() = 0;

    virtual void setVendorName(const std::string vendorName) = 0;
    virtual void setModel(const std::string model) = 0;
    virtual void setName(const std::string name) = 0;
    virtual void setCapacity(int capacity) = 0;
    virtual void setAmount(int amount) = 0;

    virtual const std::string& getVendorName() const = 0;
    virtual const std::string& getModel() const = 0;
    virtual const std::string& getName() const = 0;
    virtual int getCapacity() const = 0;
    virtual int getAmount() const = 0;

    virtual void printDeviceProperties() = 0;
    virtual void load();
    virtual void save();
    virtual void setDefault() = 0;

};

#endif // IDEVICE_H
