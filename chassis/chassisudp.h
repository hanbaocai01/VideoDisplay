#ifndef CHASSISUDP_H
#define CHASSISUDP_H

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
//#include <sys/socket.h>
#include <winsock.h>
//#include <arpa/inet.h>
#include <windows.h>

class chassisUDP
{
public:
    chassisUDP();
private:
    int sock_fd;
    int addr_len;
    int send_num;
    int recv_num;
    char send_buf[1024] = "hey, who are you?";
    char recv_buf[1024];
};

#endif // CHASSISUDP_H
