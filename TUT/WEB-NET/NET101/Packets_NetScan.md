<u>**Packets**</u>

+   <u>Structure</u>

    A packet at any level compromises of two parts.

    1.  A header:

        <u>Ethernet Header</u>

        <u>IP Header</u>

        <u>TCP Header</u>

    2.  A body:

        This is typically the packet as it were a level before and possibly some additional data. For example

+   <u>TCP Handshake and Teardown</u>

    +   <u>Handshake</u>

        Client begins conversation with a SYN packet. Server acknowleges the receipt of the SYN packet with a SYN ACK packet. Client acknowleges the receipt of the SYN ACK packet with an ACK packet. Subsequently, both parties confirm receipt of a packet by sending ACK packets.

        The sequence numbers of a communication start off at a random number. Eg. the SYN packet used to begin the conversation starts at a random number `x` and the acknowlegement number begins at 0. The server responds with a SYN ACK packet with a random sequence number `y` and an acknowlege number of `x+1`. Now, the client continues communicating with sequence number `x+i` and acknowlegment number `y+i` for the i-th packet (recall that when i = 0 a.k.a first packet, `y` = 0 too as no seq number has been received from the server)

        ```
        ----------                                       ----------
        |        |                                       |        |
        |        |---{SYN packet(seq: 5, ack:0)}-------->|        |
        |        |                                       |        |
        |        |<--{SYN ACK packet(seq: 34, ack: 6)}---|        |
        | client |                                       | server |
        |        |---{ACK packet(seq: 7, ack: 35)}------>|        |
        |        |                                       |        |
        |        |               ...                     |        |
        |        |                                       |        |
        ----------                                       ----------
        ```

    +   <u>Teardown</u>

        ```
        ----------                                       ----------
        |        |                                       |        |
        |        |---{SYN packet(seq: 5, ack:0)}-------->|        |
        |        |                                       |        |
        |        |<--{SYN ACK packet(seq: 34, ack: 6)}---|        |
        | client |                                       | server |
        |        |---{ACK packet(seq: 7, ack: 35)}------>|        |
        |        |                                       |        |
        |        |               ...                     |        |
        |        |                                       |        |
        ----------                                       ----------
        ```  

<u>**Network Scans**</u>

+   <u>Stealth SYN Scan</u>

    Also known as ther half-open scan because it does not complete the TCP handshake. It works by sending a SYN packet and checking the response. If the response is a SYN/ACK the port was accepting connections. An RST packet is the sent to destroy the connection. The `nmap` tool can be used to perform a SYN scan.

    ```
    $ nmap -sS <target ip>
    ```

+   <u>FIN, X-mas and NULL Scans</u>

    General idea is to spam all the ports on the target with illegitimate packets. Closed ports will typically respond with an RST packet while open ports will ignore illegitimate packets. The FIN scan sends a FIN packet, the X-mas scan sends a packet whose URGent, FINish and PUSH flags are turned on. A NULL scan packet doesn't set any TCP flags. The `nmap` tool can also be used to perform these scans on a target.

    ```
    $ nmap -sF <target IP> # FIN scan
    $ nmap -sX <target IP> # X-mas scan
    $ nmap -sN <target IP> # NULL scan
    ```

+   <u>Spoofing</u>

    Using IP address of other live-hosts to avoid detection. This works by using the decoy IP addresses as source IP. The `nmap` tool allows decoy with the `-D` option.

    ```
    $ nmap -D <decoy IP>,<decoy IP>,<decoy IP> <target IP>
    ```

+   <u>Proactive Defence</u>

    Scans may reveal the network layout and listening services. Hence, although by themselves, the are not harmful (except DoS eg ping of death) they may expose weaknesses. Network administrators may wish to prevent their systems from responding to scans. These can be done using firewalls or kernel modifications depending on the behaviour of the scan and the information it relies on to succeed.

+   <u>Nmap</u>

    From their website [https://nmap.org](https://nmap.org), Nmap is a Network Mapper; a free Security Scanner, Port Scanner & Network Exploration tool.

    The tool can be used to enumerate listening ports, services running on these points, operating systems running on hosts etc. The tools also supports scripting using the Nmap Scripting Engine. Scripts can be run on each host port identified to be listening.

    Some sample scan commands and what they achieve are listed below

    | Scan types/opt | Explanation               |
    |----------------|---------------------------|
    | -sT            | Connect scan              |
    | -O             | OS detection              |
    | -A             | Aggressive scan           |
    | -sV            | Service Version detection |
    | -px-y          | specify port range [x, y] |

    etc
