// main.cpp

#include "vlan_setup.h"

int main() {
    const char *ifaceName = "eth0";  // Interface name
    int vlanId = VLAN_ID;

    // Create VLAN interface
    if (createVLAN(ifaceName, vlanId) == -1) {
        std::cerr << "Error creating VLAN interface" << std::endl;
        return 1;
    }

    // Print endpoint IPv6 addresses
    printIPv6(PREFIX, vlanId, true);  // Global IPv6 address
    printIPv6(PREFIX, vlanId, false); // Local IPv6 address

    return 0;
}
