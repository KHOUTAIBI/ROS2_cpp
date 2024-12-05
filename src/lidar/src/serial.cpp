#include "../include/serial.h"


// opening the serial port
int open_port(const char* port_name) {
    int file = open(port_name, O_RDWR | O_NOCTTY | O_SYNC);
    if (file < 0) {
        std::cerr << "Error opening the port: " << strerror(errno) << std::endl;
        return -1;
    }
    return file;
}

// Configuring the serial port and its baudrate
int configure_serial_port(int file, int baudrate) {
    struct termios tty;
    if (tcgetattr(file, &tty) != 0) {
        std::cerr << "Error from tcgetattr: " << strerror(errno) << std::endl;
        return false;
    }

    cfsetospeed(&tty, baudrate);
    cfsetispeed(&tty, baudrate);

    tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8; // 8-bit characters
    tty.c_iflag &= ~IGNBRK;                     // disable break processing
    tty.c_lflag = 0;                            // no canonical processing
    tty.c_oflag = 0;                            // no remapping, no delays
    tty.c_cc[VMIN] = 1;                         // read blocks until 1 char
    tty.c_cc[VTIME] = 5;                        // 0.5 seconds read timeout

    tty.c_iflag &= ~(IXON | IXOFF | IXANY);     // shut off xon/xoff ctrl
    tty.c_cflag |= (CLOCAL | CREAD);            // enable reading
    tty.c_cflag &= ~(PARENB | PARODD);          // no parity
    tty.c_cflag &= ~CSTOPB;                     // 1 stop bit
    tty.c_cflag &= ~CRTSCTS;                    // no flow control

    if (tcsetattr(file, TCSANOW, &tty) != 0) {
        std::cerr << "Error from tcsetattr: " << strerror(errno) << std::endl;
        return false;
    }
    return true;
}

// function that reads the incoming buffer to a certain limit char character
int printing_buffer_to_limit(char *buffer, char limit){
  // Suppose that the buffer is empty, we exit the program and do nothing
  if (sizeof(buffer)==0){
    std::cout << "Nothing to read Here -> Exiting";
    return 0;
  }
  std::cout << "Received the following char :";
  // Printing the buffer characters to a certain limit char to define
  for (int i = 0 ; buffer[i] != limit; i++){
    std::cout << buffer[i];
  }

  return 1;
}

// Function to read the buffer's data, this will most likely be used for structures
int read_bytes(int file, double* buffer){
  // Reading the buffer data
  int read_buffer = read(file,buffer,sizeof(buffer));
  return read_buffer;
}