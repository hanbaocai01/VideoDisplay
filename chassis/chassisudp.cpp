#include "chassisudp.h"
#include <QtDebug>
#define     DEST_PORT       35001
#define     DEST_IP_ADDR    "127.0.0.1"
//为了在windows上测试，暂时注释
chassisUDP::chassisUDP()
{
//    sock_fd = socket(AF_INET, SOCK_DGRAM, 0);
//    if (sock_fd < 0)
//    {
//        perror("socket");
//        exit(1);
//    }
//    //设置address
//    struct sockaddr_in addr_serv;
//    memset(&addr_serv, 0, sizeof(addr_serv));
//    addr_serv.sin_family = AF_INET;
//    addr_serv.sin_addr.s_addr = inet_addr(DEST_IP_ADDR);
//    addr_serv.sin_port = htons(DEST_PORT);
//    addr_len = sizeof(addr_serv);

//    send_num = sendto(sock_fd, send_buf, sizeof(send_buf), 0, (struct sockaddr *)&addr_serv, addr_len);
//    if (send_num < 0)
//    {
//        perror("sendto error:");
//        exit(1);
//    }
//    else
//        qDebug() << "send_num:" << send_num;
}
