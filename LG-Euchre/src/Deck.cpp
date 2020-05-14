// Deck.cpp
#include "Deck.h"
#include <algorithm>
#include <random>
#include <stdio.h>
#include <ctime> 

void Deck::Shuffle()
{
    std::srand(time(0));

    auto rng = std::default_random_engine {};

    // in the future, would be cool to write my own shuffler
    std::shuffle(AllCards.begin(), AllCards.end(), rng);

    AvailableCards = AllCards;

    discardedCards.clear();
}

void Deck::ShuffleOnlyCurrent()
{
    std::srand(std::time(0));

    auto rng = std::default_random_engine {};

    // in the future, would be cool to write my own shuffler
    std::shuffle(AvailableCards.begin(), AvailableCards.end(), rng);
}

std::vector<Card> Deck::DealHand(int handSize)
{
    if (handSize < 1 || handSize > AvailableCards.size())
    {
        throw "Invalid hand size";
    }

    std::vector<Card> returnHand;

    for (int i = 0; i < handSize; i++)
    {
        int randC = std::rand() % (AvailableCards.size() - 1);

        returnHand.push_back(AvailableCards[randC]);

        DiscardCard(&AvailableCards[randC]);
    }

    // Goes through each card in returnHand and removes it from AvailableCards
    //for (int j = 0; j < returnHand.size(); j++)
    //{
    //    DiscardCard(&returnHand[j]);
    //}

    return returnHand;
}

void Deck::DiscardCard(Card * disc)
{
    discardedCards.push_back(*disc);

    // Remove the card from AvailableCards
    for (int i = 0; i < AvailableCards.size(); i++)
    {
        if (*disc == AvailableCards[i])
        {
            Card tempC = *disc;
            AvailableCards[i] = AvailableCards.back();
            AvailableCards[AvailableCards.size() - 1] = tempC;
            AvailableCards.pop_back();
        }
    }

    /*std::vector<Card>::iterator it = std::find_if(AvailableCards.begin(), AvailableCards.end(), *disc);

    if (it != AvailableCards.end())
    {
        int index = std::distance(AvailableCards.begin(), it);

        AvailableCards.erase(AvailableCards.begin() + index);
    }*/
}