#include "counterstrike.h"
#include <conio.h>
#include <windows.h>

CounterStrike::CounterStrike(): _currentWeapon(new Pistol())
{

}

CounterStrike::CounterStrike(Weapon* weapon): _currentWeapon(weapon)
{

}

CounterStrike::~CounterStrike()
{
    delete _currentWeapon;
}

void CounterStrike::run()
{
    bool isExit = false;

    while(_kbhit && !isExit)
    {
        switch (_getch())
        {

        case 13: //Enter
            _currentWeapon->action1();
            break;

        case 32: //space
            _currentWeapon->action2();
            break;

        case 48:
            delete _currentWeapon;
            _currentWeapon = new Knife();
            printChangedWeapon();
            break;

        case 49:
            delete _currentWeapon;
            _currentWeapon = new Pistol();
            printChangedWeapon();
            break;

        case 50:
            delete _currentWeapon;
            _currentWeapon = new Shootgun();
            printChangedWeapon();
            break;

        case 51:
            delete _currentWeapon;
            _currentWeapon = new Machinegun();
            printChangedWeapon();
            break;

        case 52:
            delete _currentWeapon;
            _currentWeapon = new SniperRiffle();
            printChangedWeapon();
            break;

        case 53:
            delete _currentWeapon;
            _currentWeapon = new Granade();
            printChangedWeapon();
            break;

        case 54:
            delete _currentWeapon;
            _currentWeapon = new SmokeGranade();
            printChangedWeapon();
            break;

        case 27:
            std::cout << "Game Over!" << std::endl;
            isExit = true;
            break;

        default:
            break;
        }
    }
}

void CounterStrike::action1()
{
    _currentWeapon->action1();
}

void CounterStrike::action2()
{
    _currentWeapon->action2();
}

void CounterStrike::printChangedWeapon()
{
    std::cout << "Weapon has been changed to "
              << _currentWeapon->getName() << std::endl;
}
