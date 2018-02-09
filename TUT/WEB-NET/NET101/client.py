import socket
import sys

def clean_exit(rc, sock, message):
    if (rc == -1 or sock == None):
        if sock != None:
            sock.close()
        print(message)
        exit(1)

def client():
    # requires a port number and IP to connect to
    if len(sys.argv) < 3:
        print("[Usage]: client.py SERVER_IP PORT")
        exit(1)
    
    # create socket
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    clean_exit(0, client_socket, "[Client socket error]: ")

    # open connection
    server_addr = (sys.argv[1], int(sys.argv[2]))
    rc = client_socket.connect(server_addr)
    clean_exit(rc, client_socket, "[Client connect error]: ")

    # send messages to server. Conversations are over client_socket
    print("CLIENT CONNECTED TO SERVER AT {}:{}".format(sys.argv[1], sys.argv[2]))
    client_socket.sendall("Hello server, would you like to chat?\n")
    server_msg = client_socket.recv(1024)
    print("{} said: ".format(sys.argv[1]) + server_msg)

    # terminate connection
    client_socket.close()

if __name__ == '__main__':
    client()