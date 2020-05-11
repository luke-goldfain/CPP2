// Deck.h
#ifndef DECK_H
#define DECK_H
#include <vector>
#include "Card.h"

class Deck
{
private:
    std::vector<Card> discardedCards;
public:
    std::vector<Card> AllCards;
    std::vector<Card> AvailableCards;

    Deck()
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 13; j++)
            {
                Card * c = nullptr;

                switch (i)
                {
                    case 0:
                        c = new Card(Suits::Spades, j + 1);
                        break;
                    case 1:
                        c = new Card(Suits::Clubs, j + 1);
                        break;
                    case 2:
                        c = new Card(Suits::Hearts, j + 1);
                        break;
                    case 3:
                        c = new Card(Suits::Diamonds, j + 1);
                        break;
                }

                AllCards.push_back(*c);
            }
        }

        AvailableCards = AllCards;
    }

    void Shuffle();                  // Shuffles the deck, putting all discarded cards back in
    void ShuffleOnlyCurrent();       // Shuffles only what is still in the deck
    std::vector<Card> DealHand(int handSize); // Deals from current cards
    void DiscardCard(Card * disc);     // Discards the passed card from the deck
};

#endif