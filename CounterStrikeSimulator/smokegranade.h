#ifndef SMOKEGRANADE_H
#define SMOKEGRANADE_H

#include "weapon.h"

class SmokeGranade : public Weapon
{
public:
    SmokeGranade();
    virtual ~SmokeGranade() override;

    virtual void action1() override;
    virtual void action2() override;
};

#endif // SMOKEGRANADE_H
