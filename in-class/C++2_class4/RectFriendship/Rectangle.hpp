#ifndef RECTANGLE_H
#define RECTANGLE_H

class Square;

class Rectangle
{
private:
    int m_height;
    int m_width;

public:
    Rectangle();
    Rectangle(int height, int width);
    int area();
}

#endif