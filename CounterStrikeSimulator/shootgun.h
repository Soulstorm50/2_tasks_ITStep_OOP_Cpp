#ifndef SHOOTGUN_H
#define SHOOTGUN_H

#include "weapon.h"

class Shootgun : public Weapon
{
public:
    Shootgun();
    virtual ~Shootgun() override;

    virtual void action1() override;
    virtual void action2() override;
};

#endif // SHOOTGUN_H
