// vlan_setup.h

#ifndef VLAN_SETUP_H
#define VLAN_SETUP_H

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <sys/socket.h>
#include <linux/if.h>
#include <linux/if_vlan.h>
#include <netinet/in.h>

// Function to create a VLAN interface
int createVLAN(const char *iface, int vlanId);

// Function to print IPv6 address
void printIPv6(const char *prefix, int vlanId, bool isGlobal);

#endif // VLAN_SETUP_H
