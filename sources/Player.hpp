//
// Created by shaul on 24/04/2022.
//

#include <iostream>
using namespace std;
namespace coup{
    class Player{
    private:
        //Game game
        string name;
        int coins;
    public:
        //Player(Game game, string player_name);

        //Now the 3 actions each player can execute in each turn
        void income(){
            coins++;
        }
    };


}