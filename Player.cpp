//
// Created by shaul on 24/04/2022.
//
#include <iostream>
#include "Player.hpp"
using namespace std;
namespace coup{
        Player::Player(Game & current_game, string player_name) : game(current_game),
        name(player_name) , Coins(0){
            this->game.Players.push_back(player_name);//adding player to game
        }

        //Now the 3 actions each player can execute in each turn
        Player &Player::income() {
            //throw if not his turn
            this->Coins++;
            //possibly add to game array the action this player took
            //Player::game.next
            return *this;
        }
        Player &Player::foreign_aid() {
            //throw if not his turn
            this->Coins+=2;
            //Player::game.next
            return *this;
        }
        Player &Player::coup(Player) {
            if(this->Coins < 7){
                throw invalid_argument("Not enough coins to do this action");
            }
            //remove player
            return *this;
        }



}
