#ifndef SNIPERRIFFLE_H
#define SNIPERRIFFLE_H

#include "weapon.h"

class SniperRiffle : public Weapon
{
public:
    SniperRiffle();
    virtual ~SniperRiffle() override;

    virtual void action1() override;
    virtual void action2() override;
    virtual const char* getName() const override;

private:

    char* _name;

};

#endif // SNIPERRIFFLE_H
