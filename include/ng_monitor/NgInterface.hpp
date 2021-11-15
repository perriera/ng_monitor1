#ifndef _EXTRA_NGINTERFACE_HPP
#define _EXTRA_NGINTERFACE_HPP

#include <extras/interfaces.hpp>
#include <rsi/uploader/Uploader.hpp>
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

        /**
         * @brief interface NgMonitor
         *
         */
        interface NgMonitorInterface {
            virtual void transfer() const pure;
        };

    }  // namespace rsi

}  // namespace extras

#endif  // _EXTRA_NGINTERFACE_HPP