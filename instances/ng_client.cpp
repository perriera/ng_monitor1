#include <ng_monitor/Client.hpp>
#include <iostream>

using namespace extras;

int main(int argc, char const* argv[]) {
  try {
    ng_monitor::NgMonitorClient vendor;
    vendor.parameters(argc, argv);
    vendor.connect();
    vendor.transfer();
    printf("[+]File data processed successfully.\n");
    vendor.close();
    printf("[+]Closed the connection.\n");
    return 0;
  }
  catch (std::exception& ex) {
    printf("[-]%s.\n", ex.what());
    return -1;
  }
}
