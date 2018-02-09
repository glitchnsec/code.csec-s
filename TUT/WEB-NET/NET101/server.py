import socket
import sys

def clean_exit(rc, sock, message):
    if (rc == -1 or sock == None):
        if sock != None:
            sock.close()
        print(message)
        exit(1)

def server():
    server_msg = "I'm a grumpy server, don't connect, I don't want no friends!\n"

    # requires a port number to listen on
    if len(sys.argv) < 2:
        print("[Usage]: server.py PORT")
        exit(1)
    
    # create server address
    server_addr = ('', int(sys.argv[1])) # bind to an available IP on the machine running server code

    # open socket and check error
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    clean_exit(0, server_socket, "[Server socket error]: ")

    # allow reusable port after disconnect or termination of server
    rc = server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    clean_exit(rc, server_socket, "[Server setsockopt error]: ")

    # bind socket to any address om the machine and port and check error
    rc = server_socket.bind(server_addr)
    clean_exit(rc, server_socket, "[Server bind error]: ")

    # listen on the socket for up to 5 connections and check error
    rc = server_socket.listen(5)
    clean_exit(rc, server_socket, "[Server listen error]: ")

    # accept connection forever
    print("SERVER AT {}:{} LISTENING FOR CONNECTIONS".format(server_addr[0], server_addr[1]))
    while 1:
        (client_socket, client_addr) = server_socket.accept()
        print("RECEIVED CONNECTION FROM {}:{}".format(client_addr[0], client_addr[1]))
        client_msg = client_socket.recv(1024)
        print("{} said: ".format(client_addr[0]) + client_msg)
        client_socket.sendall(server_msg)

        # close client
        client_socket.close()

if __name__ == "__main__":
    server()