/* 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>

void error(char *msg)
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(1);
}

int open_socket(int port)
{
 //    struct addrinfo *res;
 //    struct addrinfo hints;
 //    int d_sock, c;

 //    memset(&hints, 0, sizeof(hints));
 //    hints.ai_family = PF_UNSPEC;
 //    hints.ai_socktype = SOCK_STREAM;
 //    if (getaddrinfo(host, port, &hints, &res) == -1)
	// error("Can't resolve the address");
 //    if (( d_sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol)) == -1)
	// error("Can't open socket");

 //    c = connect(d_sock, res->ai_addr, res->ai_addrlen);
 //    freeaddrinfo(res);
 //    if (c == -1)
	// error("Can't connect to the socket");

 //    return d_sock;

    int sock_fd;
    struct sockaddr_in server_address;

    sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (sock_fd < 0) {
        perror("Socket creation error");
        exit(EXIT_FAILURE);
    }

    memset(&server_address, 0, sizeof(server_address));
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(port);

    int connect_val = connect(sock_fd, (const struct sockaddr *)&server_address, sizeof(server_address));
    if (connect_val < 0) {
        perror("Connection failure");
        exit(EXIT_FAILURE);
    }
    return sock_fd;
}

int say(int socket, char *s)
{
    int result = send(socket, s, strlen(s), 0);
    if (result == -1)
	error("Can't talk to the server");

    return result;
}

int main(int argc, char *argv[])
{
    int d_sock, bytes_received;
    char buf[255], rec[256];

    /* connect to server */
    d_sock = open_socket(30000);

    /* request the resource */
    // sprintf(buf, "GET /wiki/%s http/1.1\r\n", argv[1]);
    // say(d_sock, buf);

    /* send host name and required blank line */
    say(d_sock, "Hello from client");

    /* display page on stdout in 255 byte chunks */
    bytes_received = recv(d_sock, rec, 255, 0);
    while (bytes_received) {
    	if (bytes_received == EOF)
    	    error("can't read from server");

    	rec[bytes_received] = '\0';
    	printf("%s", rec);
    	bytes_received = recv(d_sock, rec, 255, 0);
    }
    close(d_sock);

    return 0;
}
