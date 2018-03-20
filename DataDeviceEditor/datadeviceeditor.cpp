#include "datadeviceeditor.h"

DataDeviceEditor::DataDeviceEditor(): _size(0)
{
    _dataDevices = new IDevice* [_size];
}

DataDeviceEditor::~DataDeviceEditor()
{

}
