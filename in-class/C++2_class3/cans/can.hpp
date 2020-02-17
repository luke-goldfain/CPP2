#ifndef TEST_H
#define TEST_H

enum COLOR {RED, GREEN, BLUE, ORANGE};

class Can
{
private:
    float m_height;
    float m_width;
    float m_depth;
    COLOR m_color;
    bool m_full;
    bool m_cold;
    bool m_open;
public:
    float get_volume();
    void set_volume(const float volume);

    COLOR get_color();
    void set_color(COLOR color);

    bool get_if_full();
    void set_if_full(bool is_full);

    bool get_if_cold();
    void set_if_cold(bool is_cold);

    bool get_if_open();
    void set_if_open(bool is_open);
}