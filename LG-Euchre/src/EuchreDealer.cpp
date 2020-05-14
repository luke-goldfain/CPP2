// EuchreDealer.cpp
#include "EuchreDealer.h"

// Shuffles current cards in deck, as discarded cards includes out-of-play 2 thru 7 cards
void EuchreDealer::ShuffleDeck()
{
    euchreDeck.ShuffleOnlyCurrent();
}

// Deals a hand of 4 from the euchre deck, a modified deck
std::vector<Card> EuchreDealer::DealHand()
{
    return euchreDeck.DealHand(4);
}

// The hand eval will give each card a value 0 through 0.9, unless it is a bower, in which case it gets a 1.
// It then returns the average of the cards' values.
float EuchreDealer::HandEval(std::vector<Card> hand)
{
    float returnFloat = 0f;

    for (int i = 0; i < hand.size(); i++)
    {
        float addFloat = 0f;

        Card currentC = hand[i];

        // Add 0.4 if the card is in the trump suit
        if (currentC.Suit == trumpSuit)
        {
            addFloat += 0.4f;
        }

        // This equation results in a number between 0 and 0.5
        addFloat += (float)(currentC.Value - 8) / 10f;

        // Overwrite the float with a 1 if the card is a bower
        if (currentC.Value == 11 && (currentC.Suit == trumpSuit || currentC.Suit == leftBSuit))
        {
            addFloat == 1f;
        }

        returnFloat += addFloat;
    }

    // Get the average of all the cards' values
    returnFloat /= (float)hand.size();

    return returnFloat;
}