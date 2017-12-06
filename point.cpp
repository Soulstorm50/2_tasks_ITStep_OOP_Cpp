#include "point.h"

Point::Point() : _x(0), _y(0)
{
    
}

Point::Point(int x, int y) : _x(x), _y(y)
{

}

int Point::getX() const
{
    return _x;
}

void Point::setX(int x)
{
    _x = x;
}

int Point::getY() const
{
    return _y;
}

void Point::setY(int y)
{
    _y = y;
}

void Point::moveUp(int value)
{
    _y += value;
}

void Point::moveDown(int value)
{
    _y -= value;
}

void Point::moveRight(int value)
{
    _x += value;
}

void Point::moveLeft(int value)
{
    _x -= value;
}
