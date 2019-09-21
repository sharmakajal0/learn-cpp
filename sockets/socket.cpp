#include<iostream>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <netdb.h>

#define BUF_SIZE 500
#define _PROTOCOL_TCP 6


int main(int argc, char* argv[])
{
    struct addrinfo hints;
    struct addrinfo *result, *rp;
    int socket_file_handle, server;
    struct sockaddr_storage peer_addr;
    socklen_t peer_addr_len;
    ssize_t nread;
    char buffer[BUF_SIZE];
    int optval;
    result = new addrinfo;
    result -> ai_addr = new sockaddr;

    if (argc != 2)
    {
        std::cout << "usage: %s IP address port\n" << std::endl;
        exit(EXIT_FAILURE);
    }

    socket_file_handle = socket(AF_INET, SOCK_STREAM, _PROTOCOL_TCP);
    setsockopt(socket_file_handle, SOCK_STREAM, SO_REUSEADDR, &optval, sizeof optval);

    bind(socket_file_handle, result -> ai_addr, sizeof(struct sockaddr));
    
    std::cout << "result-> sa_data: " << result -> ai_addr -> sa_data << std::endl;
    std::cout << "result-> sa_family: " << result -> ai_addr -> sa_family << std::endl;
    listen(socket_file_handle, 100);

    int new_socket = accept(socket_file_handle, INADDR_ANY, &peer_addr_len);

    return 0;
}