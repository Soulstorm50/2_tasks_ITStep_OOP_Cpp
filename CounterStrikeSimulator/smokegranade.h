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
    virtual const char* getName() const override;

private:

    char* _name;

};

#endif // SMOKEGRANADE_H
