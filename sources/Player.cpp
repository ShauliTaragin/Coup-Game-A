//
// Created by shaul on 24/04/2022.
//
#include <iostream>
#include "Player.hpp"
using namespace std;
namespace coup{
        Player::Player(Game current_game, string player_name) : game(current_game),
        name(player_name) , Coins(0){
//                Player::game=game;
        }

        //Now the 3 actions each player can execute in each turn
        Player &Player::income() {}
        Player &Player::foreign_aid() {}
        Player &Player::coup(Player) {}



}
