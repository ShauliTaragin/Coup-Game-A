//
// Created by shaul on 24/04/2022.
//
#include "Game.hpp"
using namespace std;
namespace coup{
    Game::Game() {
    }

    //Now the 3 Generic methods a game needs to support
    string Game::turn(){
        return Turns.front();
    }
    vector<string> Game::players() {
        return Players;
    }
    string Game::winner(){
        if (Players.size()!=1){
            throw invalid_argument("no winner yet!");
        }
        return Players.front();
    }
}

