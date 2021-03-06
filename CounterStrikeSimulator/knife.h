#ifndef KNIFE_H
#define KNIFE_H

#include "weapon.h"

class Knife : public Weapon
{
public:
    Knife();
    virtual ~Knife() override;

    virtual void action1() override;
    virtual void action2() override;
    virtual const char* getName() const override;

private:

    char* _name;

};

#endif // KNIFE_H
