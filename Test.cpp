//
// Created by shaul on 24/04/2022.
//
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
#include "doctest.h"
#include <string>
#include <sstream>

using namespace coup;
using namespace std;
TEST_CASE ("Constructor Test Good case")
{
    //checking integers
    Game game_1{};

            CHECK_NOTHROW(Captain captain(game_1, "Shauli"));
            CHECK_NOTHROW(Assassin assassin1(game_1, "Raymond"));
            CHECK_NOTHROW(Ambassador ambassador(game_1, "Lamar"));
            CHECK_NOTHROW(Duke duke(game_1, "Brown"));
            CHECK_NOTHROW(Contessa contessa(game_1, "Ronnie"));
            CHECK_NOTHROW(Assassin assassin2(game_1, "Lee"));
            CHECK_THROWS(Assassin assassin3(game_1, "Leed"));
            CHECK_THROWS(Contessa contessa2(game_1, "Mira"));
    vector<string> players = game_1.players();
        CHECK(game_1.Players.at(0) =="Shauli");
            CHECK(game_1.Players.at(1) =="Raymond");
            CHECK(game_1.Players.at(2) =="Lamar");
            CHECK(game_1.Players.at(3) =="Brown");
            CHECK(game_1.Players.at(4) =="Ronnie");
    CHECK(game_1.Players.at(5) =="Lee");
            CHECK(game_1.Turns.front() =="Shauli");
    game_1.Turns.pop();
            CHECK(game_1.Turns.front() =="Raymond");
    game_1.Turns.pop();
            CHECK(game_1.Turns.front() =="Lamar");
    game_1.Turns.pop();
            CHECK(game_1.Turns.front() =="Brown");
    game_1.Turns.pop();
            CHECK(game_1.Turns.front() =="Ronnie");
    game_1.Turns.pop();
            CHECK(game_1.Players.at(5) =="Lee");
}
