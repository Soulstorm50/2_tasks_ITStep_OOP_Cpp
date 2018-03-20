#ifndef CUSBDRIVE_H
#define CUSBDRIVE_H

#include "DataDeviceEditor/idevice.h"

class CUSBDrive : public IDevice
{
public:
    CUSBDrive();
    virtual ~CUSBDrive() override;


    virtual void setVendorName(const std::string& vendorName) override;
    virtual void setModel(const std::string& model) override;
    virtual void setName(const std::string& name) override;
    virtual void setCapacity(int capacity) override;
    virtual void setAmount(int amount) override;
    virtual const std::string& getVendorName() const override;
    virtual const std::string& getModel() const override;
    virtual const std::string& getName() const override;
    virtual int getCapacity() const override;
    virtual int getAmount() const override;
    virtual void printDeviceProperties() override;

    int getUSBSpeed() const;
    void setUSBSpeed(int USBSpeed);

private:

    std::string _vendorName;
    std::string _model;
    std::string _name;
    int _capacity;
    int _amount;
    int _USBSpeed;
};

#endif // CUSBDRIVE_H
