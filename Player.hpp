//
// Created by shaul on 24/04/2022.
//
#pragma once
#include <iostream>
#include "Game.hpp"
using namespace std;
namespace coup{
    class Player{
    protected:
        Game * p_game;
        string name;
        int Coins;
    public:
        Player(Game& game, string player_name);

        //Now the 3 actions each player can execute in each turn
        Player& income();
        Player& foreign_aid();
        virtual Player& coup(Player);
        virtual string role(){
            return Player::name;
        }
        int coins(){
            return Player::Coins;
        }

    };


}