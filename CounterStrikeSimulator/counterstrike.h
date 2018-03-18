#ifndef COUNTERSTRIKE_H
#define COUNTERSTRIKE_H

#include "CounterStrikeSimulator/weapon.h"
#include "CounterStrikeSimulator/granade.h"
#include "CounterStrikeSimulator/knife.h"
#include "CounterStrikeSimulator/machinegun.h"
#include "CounterStrikeSimulator/pistol.h"
#include "CounterStrikeSimulator/shootgun.h"
#include "CounterStrikeSimulator/smokegranade.h"
#include "CounterStrikeSimulator/sniperriffle.h"


class CounterStrike
{
public:
    CounterStrike();
    CounterStrike(Weapon* weapon);
    ~CounterStrike();

    void run();

private:

    void action1();
    void action2();
    void clearScreen();
    void draw();
    void printCurrentWaepon();


    Weapon* _currentWeapon;

};

#endif // COUNTERSTRIKE_H
