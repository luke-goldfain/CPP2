//main.cpp EuchreEval
#include <iostream>
#include <vector>
#include "EuchreDealer.h"

int main()
{
    EuchreDealer * euchre = new EuchreDealer();

    euchre->ShuffleDeck();

    std::vector<Card> hand = euchre->DealHand();

    for (int i = 0; i < hand.size(); i++)
    {
        std::cout << hand[i].Name << " of " << hand[i].DisplaySuit() << std::endl;
    }

    std::cout << "Evaluation of hand: " << euchre->HandEval(hand);
}