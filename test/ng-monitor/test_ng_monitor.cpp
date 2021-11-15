#include <ng_monitor/Client.hpp>
#include <extras/filesystem/paths.hpp>

#include <extras/strings.hpp>
#include <extras/filesystem/paths.hpp>
#include <filesystem>
#include <iostream>
#include <rsi/parcel/Parcel.hpp>

#include "../vendor/catch.hpp"
#include "../vendor/fakeit.hpp"

using namespace extras;
namespace fs = std::filesystem;

// SCENARIO("Test NgMonitorInterface", "[NgMonitorInterface]") {
//     auto project = ~extras::Paths("data/cplusplusorg.freeformjs.imploded.zip");
//     rsi::Parcel parcel(project);
//     if (!fs::exists(parcel.packed())) parcel.pack();
//     if (fs::exists(parcel.unpacked())) fs::remove(parcel.unpacked());
//     REQUIRE(fs::exists(parcel.packed()));
//     REQUIRE(!fs::exists(parcel.unpacked()));
//     system("build/ng_server data/cplusplusorg.freeformjs.imploded.zip 127.0.0.1 9002 &");
//     REQUIRE(system("build/ng_monitor data/cplusplusorg.freeformjs.imploded.zip 127.0.0.1 9002") == 0);
//     // REQUIRE(fs::exists(parcel.packed()));
//     // REQUIRE(fs::exists(parcel.unpacked()));
// }
