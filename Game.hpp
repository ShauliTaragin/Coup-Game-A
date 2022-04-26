//
// Created by shaul on 24/04/2022.
//
#pragma once
#include <vector>
#include <iostream>
#include <queue>
using namespace std;
namespace coup{
    class Game{
    public:
        vector<string> Players;
        queue<string> Turns;
        Game();
        string turn();
        vector<string> players();
        string winner();


        //other methods we need for game:
        //next() -> perhaps runned by a queue
        //remove ->removing player perhaps from queue and vector

    };

}
