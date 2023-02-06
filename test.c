#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include <stddef.h>
#include <errno.h>
#include <fcntl.h>
#include "my_sock.h"

int main(int argc, char *argv[])
{
    int port[4];
    port[0] = 1234;
    port[1] = 2345;
    port[2] = 3456;
    port[3] = 4567;

    int sock[4];
    struct sockaddr_in addr[4];

    char *ip[4];
    ip[0] = argv[3];
    ip[1] = argv[4];
    ip[2] = argv[5];
    ip[3] = argv[6];

    printf("%s", ip[0]);
}