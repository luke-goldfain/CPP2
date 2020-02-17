#include "can.hpp"

float Can::get_volume()
{
    float result = this->m_height * this->m_width * this->m_depth;

    return result;
}

// etc..