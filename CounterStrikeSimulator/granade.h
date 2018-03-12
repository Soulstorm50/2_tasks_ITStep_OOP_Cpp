#ifndef GRANADE_H
#define GRANADE_H

#include "weapon.h"

class Granade : public Weapon
{
public:
    Granade();
    virtual ~Granade() override;

    virtual void action1() override;
    virtual void action2() override;
};

#endif // GRANADE_H
