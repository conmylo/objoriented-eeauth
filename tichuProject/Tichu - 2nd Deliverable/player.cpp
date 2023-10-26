#include "player.h"
#include "hand.h"
#include <ctime>


Player::Player(int idx){
    index = idx;
    bucketSize = 0;
    status = "HASNTPLAYED";

    switch (index){
    case 0:
        name = "Player 1";
        break;
    case 1:
        name = "Player 2";
        break;
    case 2:
        name = "Player 3";
        break;
    case 3:
        name = "Player 4";
        break;
    }

}

void Player::setStatus(string newStatus){
    status = newStatus;
}

bool Player::hasStatus(string checkStatus){
    if(status == checkStatus) return 1;
    return 0;
}

string Player::getName(){
    return name;
}

bool Player::hasNoCardsLeft(){
    if(hand.getCardCount() == 0) return 1;
    return 0;
}

bool Player::hasMahJong(){
    for(int i=0;i < hand.getCardCount() ;i++){
        if(hand.getCard(i).hasSuit("MAHJONG")) return 1;
    }
    return 0;
}

bool Player::decidePlay(){
    srand(time(NULL));
    return rand()%2;
}

// TODO: Implement here the methods of Player
// Do not implement the methods addCardToHand, removeCardFromHand, addCardsToBucket
// createHandCombinations, findNumberOfPlayableCombinations, playAnyCombination, play
// These are already implemented in file playercombinations.cpp
// Implement the rest of the methods of Player
