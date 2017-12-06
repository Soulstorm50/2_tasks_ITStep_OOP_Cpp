#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point();
    Point(int x, int y);
    
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);
    void moveUp(int value);
    void moveDown(int value);
    void moveRight(int value);
    void moveLeft(int value);
    
private:
    
    int _x;
    int _y;
    
};

#endif // POINT_H
