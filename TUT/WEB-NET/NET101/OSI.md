<u>**OSI Model**</u>

Simply put, the layers of communication. Below we elaborate in a bottoms-up approach

+   <u>Physical Layer</u>

    Physical connection between two points. Communication over raw-bit streams.

+   <u>Data-Link Layer</u>

    Provides error correction and flow control. Ethernet is an example protocol in this layer. Ethernet protocol uses a standard addressing for devices known as Media Access Control adresses. The addresses are meant to be unique (at least within reasonable scope). Commonly known as hardware address. MAC address should be fixed. They consist of six bytes in the form `xx:xx:xx:xx:xx:xx`.

    Since hardware devices have other means of addressing known as IP, a protocol exists to map these two addressing schemes. The Address Resolution Protocol a.k.a ARP is responsible for mapping IP address to MAC address. Address maps are updated regularly on devices using ARP-requests and ARP-responses. 

+   <u>Network Layer</u>

    This layer provides addressing and routing. The protocol at this layer is the Internet Protocol (IP). There are two addressing schemes employed, namely; IPv4 and IPv6. In IPv4, addressing uses 32-bits. This method of addressing is most commonly and short-lived as millions of devices get connected to the internet. The IPv4 addresses are in the format `xxx.xxx.xxx.xxx` where each `xxx` is in the range of 0-255 (inclusive). On the other hand, IPv6 addressing uses 128-bits providing a larger address space. The IPv6 addresses are in the format `xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:xxxx` where each `xxxx` is in the range `0000` - `ffff` (inclusive)

+   <u>Transport Layer</u>

    This layer provides data transfer between systems. 

+   <u>Session Layer</u>

+   <u>Presentation Layer</u>

+   <u>Application Layer</u>

+   <u>The Encapsulation story</u>
