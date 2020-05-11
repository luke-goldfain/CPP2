//main.cpp Euchre
#include <iostream>
#include <vector>
#include "Deck.h"

int main()
{
    Deck * deck = new Deck();

    deck->Shuffle();

    std::vector<Card> hand = deck->DealHand(4);

    for (int i = 0; i < hand.size(); i++)
    {
        std::cout << hand[i].Name << " of " << hand[i].DisplaySuit() << std::endl;
    }
}