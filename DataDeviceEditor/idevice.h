#ifndef IDEVICE_H
#define IDEVICE_H

#include <string>
#include <iostream>
#include <windows.h>

//11.2 Разработать программу, которая формирует список носителей информации,
//таких как, USB-флеш-накопитель, портативный жесткий диск, DVD–диск.
//Каждый носитель информации является объектом соответствующего класса.
//Все три класса являются производными от базового класса «Носитель
//информации» (Device). В базовом классе хранится имя производителя,
//модель, наименование, ёмкость носителя, количество. Класс обладает всеми
//необходимыми методами-аксессорами, а также методами печати, загрузки и сохранения.
//В производных классах переопределяются методы печати, загрузки и сохранения.
//Кроме того, каждый из производных классов дополняется следующими полями:

//класс «USB-флеш-накопитель»: скорость USB;
//класс «Портативный жесткий диск»: скорость вращения шпинделя;
//класс «DVD–диск»: скорость записи.

//Работа с объектами соответствующих классов производится через указатели типа
//базового класса, которые хранятся в массиве. Программа должна предоставлять
//возможность добавления, удаления (по номеру), печати, изменения (по номеру)
//определённых параметров носителя, поиска по заданному критерию. Методы загрузки
//и сохранения просто показывают сообщения вроде «данные сохранены на флешку».
//Для идентификации носителя информации необходимо применять оператор typeid.

class IDevice
{
public:
    virtual ~IDevice() = 0;

    virtual void setVendorName(const std::string vendorName) = 0;
    virtual void setModel(const std::string model) = 0;
    virtual void setName(const std::string& name) = 0;
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
