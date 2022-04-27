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
            this->game.Turns.push(player_name);
        }

        //Now the 3 actions each player can execute in each turn
        Player &Player::income() {
            //throw if not his turn
            this->Coins++;
            //possibly add to game array the action this player took
            //changing the turn to the next player
            string player_which_played = game.Turns.front();
            game.Turns.pop();
            game.Turns.push(player_which_played);
            return *this;
        }
        Player &Player::foreign_aid() {
            //throw if not his turn
            this->Coins+=2;
            //changing the turn to the next player
            string player_which_played = game.Turns.front();
            game.Turns.pop();
            game.Turns.push(player_which_played);
            return *this;
        }
        Player &Player::coup(Player) {
            if(this->Coins < 7){
                throw invalid_argument("Not enough coins to do this action");
            }
            this->Coins-=7;
            //remove player
            return *this;
        }




}
