#include <cstring>
#include <errno.h>
#include <fcntl.h>
#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <sstream>


#define BAUDRATE B115200 // Match this with your Arduino code

int open_port(const char* port_name); // Function to open the serial port
int configure_serial_port(int file, int baudrate); // configuring the baudrate of the opened serail port
int printing_buffer_to_limit(char *buffer, char limit); //printing the char to a certain limit value
int read_bytes(int file, double* buffer); // This will most likely be used to read the strcutres we will be sending, to test