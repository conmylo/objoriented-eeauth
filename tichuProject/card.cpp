#include "card.h"

Card::Card(){
    suit = "";
    value = 0;
}

void Card::setValue(int theValue){
    value = theValue;
}

void Card::setSuit(string theSuit){
    suit = theSuit;
}

string Card::getSuit(){
    return suit;
}

bool Card::hasSuit(string theSuit){
    if(suit == theSuit) return 1;
    return 0;
}

int Card::getValue(){
    return value;
}

bool Card::equals(Card otherCard){
    if(suit == otherCard.getSuit() && value == otherCard.getValue()) return 1;
    return 0;
}

bool Card::canBeInCombination(){
    if(suit == "Dragon" || suit == "Dog") return 0;
    return 1;
}

bool Card::canBeInBomb(){
    if(suit == "Mah Jong" || suit == "Dog" || suit == "Dragon" || suit == "Phoenix") return 0;
    return 1;
}

// TODO: Implement here the methods of Card
