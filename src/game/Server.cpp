#include <ng_monitor/Server.hpp>
#include <extras/filesystem/paths.hpp>
#include <rsi/parcel/Parcel.hpp>

#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

// build/_deps/rsi-build//socketpool_server 127.0.0.1 8080 send.txt upload download
// build/_deps/rsi-build//socketpool_client 127.0.0.1 8080 8080 data/cplusplusorg.freeformjs.imploded.zip upload vendor download

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