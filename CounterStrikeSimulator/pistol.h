#ifndef PISTOL_H
#define PISTOL_H

#include "weapon.h"

class Pistol : public Weapon
{
public:
    Pistol();
    virtual ~Pistol() override;

    virtual void action1() override;
    virtual void action2() override;
    virtual const char* getName() const override;

private:

    char* _name;

};

#endif // PISTOL_H
