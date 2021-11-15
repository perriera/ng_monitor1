
#include <iostream>
#include <ng_monitor/NgInterface.hpp>
#include <extras/filesystem/paths.hpp>

#include "../vendor/catch.hpp"
#include "../vendor/fakeit.hpp"

using namespace extras;
using namespace ng_monitor;
using namespace fakeit;

SCENARIO("Mock NgMonitorInterface: toOctal", "[CHES-9]") {

    Mock<NgMonitorInterface> mock;
    When(Method(mock, transfer)).Return();

    NgMonitorInterface& i = mock.get();
    i.transfer();
    Verify(Method(mock, transfer));
}