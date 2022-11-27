#include "combination.h"
#include "card.h"

Combination::Combination(){
    numberOfCards = 0;
}

void Combination::addCard(Card card){
    cards[numberOfCards++] = card;
}

Card Combination::getCard(int index){
    return cards[index];
}

int Combination::getValue(){
    return cards[0].Card::getValue();
}

int Combination::getNumberOfCards(){
    return numberOfCards;
}

bool Combination::canBePlayed(Combination last){
    if(getNumberOfCards() == last.getNumberOfCards() && getValue() > last.getValue()) return 1;
    return 0;
}


// TODO: Implement here the methods of Combination
