//
// Created by shaul on 24/04/2022.
//
#include "Duke.hpp"
namespace coup{

    void Duke::block(Player& player1) {
        return ;
    }

    void Duke::tax() {
        this->Coins+=3;
        string curr_player = this->p_game->Turns.front();
        this->p_game->Turns.pop();
        this->p_game->Turns.push(this->name);
        //add this action to bank of actions
    }
}

