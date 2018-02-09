<u>**Packets**</u>

+   <u>Structure</u>

    A packet at any level compromises of two parts.

    1.  A header:

        <u>Ethernet Header</u>

        Typically 14 bytes in size. Contains the source and destination MAC addresses for the ethernet packet. The broadcast address `ff:ff:ff:ff:ff:ff` is used to send a packet to all connected devices.

        <u>IP Header</u>

        Typically 20 bytes in size. Defined in RFC 791. Contains various fileds and bitflags in addition to the source and destination IP fields. Also includes a protocol field to further describe the data in the packet.

    2.  A body:

        This is typically the packet as it were a level above and possibly some additional data. For example: A http request is actual data to be sent. Then it is encapsulated by TCP which inserts the protocol information. At IP layer, source and destination IP are set. as the packet travels down the stack it gains layers. These layers are peeled back on the receiving end to be interpreted by the receipient application.

    ```
    --------------------------------------------------------------------------------
    |  Header |                                Body                     | Header   | Ethernet packet
    --------------------------------------------------------------------------------
              -----------------------------------------------------------
              | Header |                       Body                     | IP Packet
              -----------------------------------------------------------
                       --------------------------------------------------
                       | Header |              Body                     | TCP packet
                       --------------------------------------------------
                                -----------------------------------------
                                | Header |     Body                     | Application packet
                                -----------------------------------------
                                         --------------------------------
                                         |     User data (Body)         | Data
                                         --------------------------------
    ```

+   <u>Notes</u>

    +   ICMP packets:

        Used as notification packets for events during communication. ICMP Echo Request and Echo Reply are used to verify reacheability to a host.

    +   Packet Fragments:

        Break down large data into smaller packets. Order is maintained with their sequence numbers. to be reassambled at receiving end.

    +   | TCP Flags | Meaning | Purpose |
        |-----------|---------|---------|
        | URG       |Urgent   | VIP data|
        | FIN       |Finish   | Properly end communication|
        | ACK       |Acknowlegment| Acknowlege receipt of a packet|
        | PSH       |Push     | do not buffer |
        | SYN       |Synchronize| Initiate a conversation |
        | RST       |Reset    | Reset or rudely abort a connetion| 

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

        Either the client or server may initiate a teardown. Teardowns can be initiated using FIN packets or RST packets

        +   <u>Using FIN packets</u>

            One party sends a FIN packet. The other responds with an ACK to acknowlege the FIN and a FIN (i.e two packets). The initiator sends an ACK. At this point, both parties are aware the communication is over

            ```
            ----------                                       ----------
            |        |                                       |        |
            |        |------------------{FIN}--------------->|        |
            |        |                                       |        |
            |        |<-----------------{ACK}----------------|        |
            | client |                                       | server |
            |        |<-----------------{FIN}----------------|        |
            |        |                                       |        |
            |        |------------------{ACK}--------------->|        |
            |        |                                       |        |
            ----------                                       ----------
            ``` 

        +   <u>Using RST packets</u>

            Might be sent by a server to indicate to the client that the connection is now considered closed. Usually happen when packets are sent to servers without attempting a connection or attempted access to closed ports.

            ```
            ----------                                       ----------
            |        |                                       |        |
            |        |------------------{SYN}--------------->|        |
            |        |                                       |        |
            |        |<-----------------{RST}----------------|        |
            | client |                                       | server |
            |        |                                       |        |
            |        |                                       |        |
            |        |                                       |        |
            |        |                                       |        |
            ----------                                       ----------
            ``` 