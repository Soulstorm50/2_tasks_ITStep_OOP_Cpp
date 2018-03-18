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
            draw();
            printCurrentWaepon();
            this->action1();
            break;

        case 32: //space
            draw();
            printCurrentWaepon();
            this->action2();
            break;

        case 48:
            delete _currentWeapon;
            _currentWeapon = new Knife(); 
            draw();
            printCurrentWaepon();
            break;

        case 49:
            delete _currentWeapon;
            _currentWeapon = new Pistol();
            draw();
            printCurrentWaepon();
            break;

        case 50:
            delete _currentWeapon;
            _currentWeapon = new Shootgun();
            draw();
            printCurrentWaepon();
            break;

        case 51:
            delete _currentWeapon;
            _currentWeapon = new Machinegun();
            draw();
            printCurrentWaepon();
            break;

        case 52:
            delete _currentWeapon;
            _currentWeapon = new SniperRiffle();
            draw();
            printCurrentWaepon();
            break;

        case 53:
            delete _currentWeapon;
            _currentWeapon = new Granade();
            draw();
            printCurrentWaepon();
            break;

        case 54:
            delete _currentWeapon;
            _currentWeapon = new SmokeGranade();
            draw();
            printCurrentWaepon();
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
    clearScreen();
    std::cout << std::endl
              << std::endl
              << std::endl
              << std::endl
              << std::endl
              << std::endl
              << std::endl
              << "#" << "\t\t";
    _currentWeapon->action1();
}

void CounterStrike::action2()
{
    clearScreen();
    std::cout << std::endl
              << std::endl
              << std::endl
              << std::endl
              << std::endl
              << std::endl
              << std::endl
              << "#" << "\t\t";
    _currentWeapon->action2();
}

void CounterStrike::clearScreen()
{
    HANDLE hOut;
    COORD Position;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

void CounterStrike::draw()
{
    clearScreen();
    std::cout << "#################################################################" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#\t\tCurrent weapon: " << "\t\t\t\t#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#" << "\t\t\t\t\t\t\t\t" << "#" << std::endl
              << "#################################################################" << std::endl;
}

void CounterStrike::printCurrentWaepon()
{
    clearScreen();
    std::cout << std::endl
              << std::endl
              << std::endl
              << std::endl
              << "#\t\t\t" << _currentWeapon->getName();
}
