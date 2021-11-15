#ifndef _EXTRA_NGSERVER_HPP
#define _EXTRA_NGSERVER_HPP

#include <extras/interfaces.hpp>
#include <ng_monitor/NgInterface.hpp>
#include <iostream>
#include <string>

namespace extras {

    /**
     * @brief rsi: (remote services interface)
     *
     * The following code has been plagerized from other authors
     * and placed here, (where is/as is) as it is code that works
     * and serves a platform for future work when it comes to
     * uploading files over an IP:port connection.
     *
     */
    namespace ng_monitor {

        concrete class NgMonitorServer extends rsi::UploaderServer {
        public:
            virtual void transfer() const override;
        };



    }  // namespace rsi

}  // namespace extras

#endif  // _EXTRA_NGSERVER_HPP