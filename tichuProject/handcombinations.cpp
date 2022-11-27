#include "hand.h"

// TODO: Implement here the method createAllCombinations of Hand

void Hand::createAllCombinations(){
    int cnt=1;
    Card temp;
    for (int i = 0 ; i < getCardCount() - 1; i++) {
        for (int j = 0 ; j < getCardCount() - i - 1; j++) {
                if (cards[j].getValue() > cards[j+1].getValue()) {
                    temp       = cards[j];
                    cards[j]   = cards[j+1];
                    cards[j+1] = temp;
            }
        }
    }
    for(int i=0;i<getCardCount()-1;i++){
        allCombinations[allCombinationsSize++].addCard(cards[i]);
        if(cards[i].getValue() == cards[i+1].getValue()){
            cnt++;
            allCombinations[allCombinationsSize].addCard(cards[i]);
            allCombinations[allCombinationsSize++].addCard(cards[i+1]);
        }
        else{
            cnt=1;
        }
        if(cnt > 2){
            allCombinations[allCombinationsSize].addCard(cards[i-1]);
            allCombinations[allCombinationsSize++].addCard(cards[i+1]);
        }
        if(cnt > 3){
            allCombinations[allCombinationsSize].addCard(cards[i-2]);
            allCombinations[allCombinationsSize++].addCard(cards[i+1]);
        }
        if(cnt > 4){
            allCombinations[allCombinationsSize].addCard(cards[i-3]);
            allCombinations[allCombinationsSize++].addCard(cards[i+1]);
        }
    }
    allCombinations[allCombinationsSize++].addCard(cards[getCardCount()-1]);
}
