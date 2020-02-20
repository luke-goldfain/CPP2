#ifndef SQUARE_H
#define SQUARE_H

class Square
{
friend class Rectangle;

private:
    int m_side;

public:
    Square(int side);
}

#endif