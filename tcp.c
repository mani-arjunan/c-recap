#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int server_fd, client_fd;
    struct sockaddr_in server_addr, client_addr;
    unsigned int addr_len = sizeof(client_addr);
    char *message = "HTTP/1.1 200 OK\r\n\r\nHello from C TCP server\r\n";

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(8080);

    bind(server_fd, &server_addr, sizeof(server_addr));

    listen(server_fd, 5);

    printf("Server listening on port 8080\n");

    while (1) {
        client_fd = accept(server_fd, (struct sockaddr*)&client_addr, &addr_len);

        printf("Client connected: %s:%d\n",
            inet_ntoa(client_addr.sin_addr),
            ntohs(client_addr.sin_port)
        );

        write(client_fd, message, strlen(message));

        close(client_fd);
    }

    return 0;
}



