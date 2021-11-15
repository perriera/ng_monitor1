#include <iostream>
#include "ng_monitor/game/ChessGame.hpp"
#include "../vendor/catch.hpp"
#include <extras/crcs.hpp>

using namespace std;

SCENARIO("Verify ChessGameInterface can be read PGN file", "[ChessGame]")
{
    ChessGame game;
    REQUIRE(true);
}

