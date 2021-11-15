#include <iostream>
#include <ng_monitor/game/ChessGame.hpp>
#include "../vendor/catch.hpp"
#include <extras/crcs.hpp>
#include <extras/filesystem/paths.hpp>
#include <rsi/parcel/Parcel.hpp>
#include <filesystem>

using namespace std;
using namespace extras;
namespace fs = std::filesystem;

SCENARIO("Verify ChessGameInterface can be read PGN file", "[ChessGame]")
{
    ChessGame game;
    REQUIRE(true);

    // 
    // perrier/extras support
    //
    crc16 crc;
    string test = "test";
    REQUIRE(crc.update(test) == 39686);

    // 
    // perrier/extras_rsi support
    //
    rsi::Filename filename = "build/run-unittests-ng_monitor";
    rsi::Parcel parcel(filename);
    parcel.pack();
    REQUIRE(fs::exists(parcel.hexed()));
    REQUIRE(fs::exists(parcel.packed()));
    parcel.unpack();
    REQUIRE(fs::exists(parcel.unpacked()));
    parcel.verify_integrity();
}

