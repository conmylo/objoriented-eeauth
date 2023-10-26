#include "helpers.h"
#include "player.h"

int numberOfPlayersThatHaveNoCardsLeft(Player players[]){
    // TODO: Implement this function
    int counter=0;
    for(int i=0 ; i<4 ; i++){
        if(players[i].hasNoCardsLeft()){
            counter++;
        }
    }
    return counter;
}

bool lastThreePlayersPassedOrHaveNoCardsLeft(Player players[], int playerTurn){
    // TODO: Implement this function
    int counter=0;
    for(int i=0; i<4 ;i++){
        if(i != playerTurn ){
            if(players[i].hasStatus("HASNOCARDSLEFT") || players[i].hasStatus("PASSED"))
                counter++;
        }
        if(counter == 3) return 1;
    }
    return 0;
}
