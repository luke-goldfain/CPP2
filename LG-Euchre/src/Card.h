// Card.h
#ifndef CARD_H
#define CARD_H
#include <string>

enum class Suits
{
    Spades, Clubs, Hearts, Diamonds
};

class Card
{
public:
    Suits Suit;
    int Value;
    std::string Name;

    Card(Suits suit, int val)
    {
        Suit = suit;
        Value = val;

//{ Region name assignment
        switch (Value)
        {
            case 1:
                Name = "Ace";
                break;
            case 2:
                Name = "Two";
                break;
            case 3:
                Name = "Three";
                break;
            case 4:
                Name = "Four";
                break;
            case 5:
                Name = "Five";
                break;
            case 6:
                Name = "Six";
                break;
            case 7:
                Name = "Seven";
                break;
            case 8:
                Name = "Eight";
                break;
            case 9:
                Name = "Nine";
                break;
            case 10:
                Name = "Ten";
                break;
            case 11:
                Name = "Jack";
                break;
            case 12:
                Name = "Queen";
                break;
            case 13:
                Name = "King";
                break;
            default:
                throw "Card value out of range";
                break;
        }
//}
    }

    std::string DisplaySuit();

    bool operator == (const Card &c2) const
    {
        return (this->Suit == c2.Suit && this->Value == c2.Value);
    }
};

/*bool operator == (const Card &c1, const Card &c2)
{
    return (c1.Suit == c2.Suit && c1.Value == c2.Value);
}*/

#endif