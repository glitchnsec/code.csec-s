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
