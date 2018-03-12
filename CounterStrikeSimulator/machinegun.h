#ifndef MACHINEGUN_H
#define MACHINEGUN_H

#include "weapon.h"

class Machinegun : public Weapon
{
public:
    Machinegun();
    virtual ~Machinegun() override;

    virtual void action1() override;
    virtual void action2() override;
};

#endif // MACHINEGUN_H
