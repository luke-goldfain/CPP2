// Card.cpp
#include "Card.h"

std::string Card::DisplaySuit()
{
    switch(Suit)
    {
        case Suits::Spades:
            return "Spades";
            break;
        case Suits::Clubs:
            return "Clubs";
            break;
        case Suits::Hearts:
            return "Hearts";
            break;
        case Suits::Diamonds:
            return "Diamonds";
            break;
    }
}