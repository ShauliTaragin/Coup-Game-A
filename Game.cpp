//
// Created by shaul on 24/04/2022.
//
#include "Game.hpp"
using namespace std;
namespace coup{
    Game::Game() {}

    //Now the 3 Generic methods a game needs to support
    string Game::turn(){}
    vector<string> Game::players() {}
    string Game::winner(){}
}

