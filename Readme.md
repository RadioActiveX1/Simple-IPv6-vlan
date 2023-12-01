# VLAN Setup Program

This C++ program demonstrates how to create a VLAN interface between two machines, generating endpoint IPv6 addresses. It utilizes Linux system calls and netlink sockets to create the VLAN.

## Prerequisites

- The program assumes that you are running it on a Linux machine with appropriate permissions to create sockets and set up network interfaces.
- Make sure you have a network interface already available (e.g., "eth0"). Adjust the interface name in the program accordingly.

## Compilation

Compile the program using a C++ compiler (e.g., g++):

```bash
g++ -c vlan_setup.cpp -o vlan_setup.o
g++ -c main.cpp -o main.o
g++ vlan_setup.o main.o -o vlan_setup_program

# Execution

## Run the program with superuser privileges:

sudo ./vlan_setup_program

# Usage
The program will create a VLAN interface with a specified VLAN ID (default is 100) on the specified network interface (default is "eth0"). After execution, the program will print the generated IPv6 addresses for the VLAN.

The IPv6 addresses are constructed based on a predefined IPv6 prefix ("fd00::") and the VLAN ID. Two addresses are printed:

1. Global IPv6 Address: Represents the global IPv6 address of the VLAN.
2. Local IPv6 Address: Represents the link-local IPv6 address of the VLAN.

# Cleanup
To remove the VLAN interface, you can use the ip command. For example:
sudo ip link delete <VLAN_INTERFACE_NAME>

Replace <VLAN_INTERFACE_NAME> with the actual name of the VLAN interface created by the program.

# Example
sudo ./vlan_setup_program

This will create a VLAN interface named "eth0.100" with VLAN ID 100 and print the associated IPv6 addresses.

sudo ip link delete eth0.100

This command will remove the created VLAN interface.

Feel free to customize this README file based on your specific requirements or provide additional information if needed.

