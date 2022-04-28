//
// Created by shaul on 24/04/2022.
//
#include "Duke.hpp"
namespace coup{

    void Duke::block(Player& player1) {
        size_t position=0;
        for (size_t i=0; i <p_game->Players.size(); i++){
            if(p_game->Players.at(i)==player1.get_name()){
                position = i;
                break;
            }
        }
        if(p_game->Bank_of_Actions.at(position)!="foreign_aid" ){
            throw invalid_argument("Can't block something that didnt happen");
        }
        player1.Coins-=2;
    }

    void Duke::tax() {
        //throw if not his turn
        if(p_game->Turns.front()!=this->name){
            throw invalid_argument("Not your turn");
        }
        this->Coins+=3;
        //changing the turn to the next player
        string player_which_played = p_game->Turns.front();
        p_game->Turns.pop();
        p_game->Turns.push(player_which_played);
        p_game->Bank_of_Actions.push_back("tax");
    }
}

