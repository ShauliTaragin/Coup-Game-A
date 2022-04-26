//
// Created by shaul on 24/04/2022.
//
#include <vector>
#include <iostream>
using namespace std;
namespace coup{
    class Game{
    private:
        vector<string> Players;
    public:
        Game();
        string turn();
        vector<string> players();
        string winner();


        //other methods we need for game:
        //next() -> perhaps runned by a queue
        //remove ->removing player perhaps from queue and vector

    };

}
