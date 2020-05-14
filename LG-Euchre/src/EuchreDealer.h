// EuchreDealer.h
#ifndef EUCHREDEALER_H
#define EUCHREDEALER_H
#include "Deck.h"

class EuchreDealer
{
private:
    Deck euchreDeck;
    Suits trumpSuit;
    Suits leftBSuit;
public:    

    EuchreDealer()
    {
        euchreDeck = Deck();

        // Assign random trump suit using a rand int
        trumpSuit = static_cast<Suits>( std::rand() % 4 );

        // Assign left bower suit based on trump suit
        switch (trumpSuit)
        {
            case Suits::Spades:
                leftBSuit = Suits::Clubs;
                break;
            case Suits::Clubs:
                leftBSuit = Suits::Spades;
                break;
            case Suits::Hearts:
                leftBSuit = Suits::Diamonds;
                break;
            case Suits::Diamonds:
                leftBSuit = Suits::Hearts;
                break;
        }

        // Discard all cards with value 2 thru 6 to make this deck a euchre deck
        for (int i = 0; i < 4; i++)
        {
            for (int j = 2; j < 7; j++)
            {
                Card * c = new Card(static_cast<Suits>(i), j);

                euchreDeck.DiscardCard(*c);
            }
        }
    };

    ~EuchreDealer()
    {
        delete euchreDeck;
    }

    void ShuffleDeck();
    std::vector<Card> DealHand();
    float HandEval(std::vector<Card> hand);
}

#endif