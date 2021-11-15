#include <ng_monitor/Server.hpp>
#include <extras/filesystem/paths.hpp>
#include <rsi/parcel/Parcel.hpp>

#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

namespace extras {

    /**
     * @brief ng_monitor::NgMonitorServer::transfer()
     *
     */
    void ng_monitor::NgMonitorServer::transfer() const {
        rsi::Parameter parameter = ~extras::Paths(filename());
        rsi::Parcel parcel(parameter);
        parcel.unpack();
        // parcel.unzip();
        // parcel.dir();
        // parcel.cat();
        // parcel.pack();
        // parcel.dir();
        parcel.unzip();
        cout << "NgMonitorServer::transfer()" << endl;
    }

}