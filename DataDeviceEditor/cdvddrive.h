#ifndef CDVDDRIVE_H
#define CDVDDRIVE_H

#include "DataDeviceEditor/idevice.h"


class CDVDDrive : public IDevice
{
public:
    CDVDDrive();
    virtual ~CDVDDrive() override;

    virtual void setVendorName(const std::string vendorName) override;
    virtual void setModel(const std::string model) override;
    virtual void setName(const std::string& name) override;
    virtual void setCapacity(int capacity) override;
    virtual void setAmount(int amount) override;
    virtual const std::string& getVendorName() const override;
    virtual const std::string& getModel() const override;
    virtual const std::string& getName() const override;
    virtual int getCapacity() const override;
    virtual int getAmount() const override;
    virtual void printDeviceProperties() override;

    int getWriteSpeed() const;
    void setWriteSpeed(int writeSpeed);
    virtual void setDefault() override;

private:

    std::string _vendorName;
    std::string _model;
    std::string _name;
    int _capacity;
    int _amount;
    int _writeSpeed;

};

#endif // CDVDDRIVE_H
