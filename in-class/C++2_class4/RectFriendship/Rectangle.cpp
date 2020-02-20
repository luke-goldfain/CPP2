#include "Rectangle.hpp"

Rectangle::Rectangle()
{
    this->m_height = 0;
    this->m_width = 0;
}

Rectangle::Rectangle(int height, int width)
{
    this->m_height = height;
    this->m_width = width;
}

int Rectangle::area()
{
    return this->m_height * this->m_width;
}

void Rectangle::convert(Square s)
{
    this->m_height = s.m_side;
    this->m_width = s.m_side;
}