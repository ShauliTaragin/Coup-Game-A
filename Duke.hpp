//
// Created by shaul on 24/04/2022.
//

#include <iostream>
#include "Player.hpp"
using namespace std;
namespace coup{
    class Duke:Player{
    public:
        Duke(Game & game, string player_name): Player(game,player_name){}
        Player& block(Player);
        string role(){
            return "Duke";
        }
        Player& tax();
    };


}