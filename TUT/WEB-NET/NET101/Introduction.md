+   <u>**Welcome to NET101**</u>

    This semester we focus on Web Applications and Computer Networks (In)Security. This document outlines an introduction to
    the materials that will be covered. You will be provided with online learning materials by knowlegeable individuals, in class
    introduction and guidelines and hands-on walkthroughs. Ultimately, what you gain from this is directly correlated to how much
    time you invest in it on your own.

+  <u>**What is a Computer Network**</u>

    An interconnectivity of computers with the purpose of sharing resources or existing as a unit eg for faster computation or shared
    computation. Most times, the term "Computer Network" refers to the Internet but it more than that. Any configuration allowing two or
    machines to communicate is considered a Computer Network. The channel/configuration is called the Network.

    <u>Types of Network based on medium (include):</u>

    +   Physical Networks: Networking of computers using physical devices such as cables, fibre optics etc. 

    +   Wireless Networks: Using radio waves to network devices by providing transmitters and receivers. Examples of wireless networks include
        WiFi, Bluetooth, Infrared, NFC etc

    +   Virtual Networks

    <u>Types of Network based on scope:</u>

    +   LAN: Local Area Networks 
    
    +   WAN: Wide Area Networks,
    
    +   MAN: Metropolitan Area Network,
    
    +   VPN: Virtual Private Networks etc

    More on these as we deem necessary. Check the resources section for more material

    Depending on the channel of communication, each node on the network implements what is known as a Network stack. These are all the layers
    by which traffic is encapsulated. We will be interested in private Computer Networks connected by a standard routing technology (a.k.a the internet)

    The network stack implemented for Internet connectivity is illustrated by the Open Systems Inteconnection (OSI) model. We will investigate the role
    and threat model for each of these layers.

+   <u>**Security of Computer Networks**</u>

    The security of a Computer Network is dependent on multiple factors:

    1.  The security of network devices such as gateways, routers and switches, domain controllers, firewalls etc

    2.  The security of nodes in the network and the services they expose to the network; printers, web servers, ftp servers etc

    3.  Technical skill of Network Administrators; misconfigurations are a one of the causes of breaches

    4.  Skill and knowlege of the adversary

    once again, the peril of defence is in the complexity of the setup. Corporate networks span thousands of nodes and devices on the network and hence locking down
    the network can be a daunting task. 

+   <u>**Insecurity of Computer Networks**</u>

    The Insecurity of Computer Networks lies in the various devices and network stacks and configurations required for Enterprise systems to communicate effectively
    and share/manage resources and or authentication. The bigger the network size the more difficult management becomes. However, there exists tools for mass management.
    Use of such tools pose a Single Point of Failure, and as such are main targets to adversaries. Examples of such tools are Active Directory and Domain controllers.

    Default passwords on devices are a major insecurity of Computer Networks as a lazy or forgetful administrator may leave these unchanged. Much of the activities in
    a network function based on trust. Hence, when one party or node in the network is compromised, it is a bit of a challenge to uncover the victim and intruder as
    there is already trust between some level of systems.

    The absence of logging or rather useable logs makes attack discovery difficult. Often times, administrators may be unsure of how much log is too much or if they are logging
    relevant information.

    So clearly, whilst the defender has so much to think about and take care of, the adversary has a simpler task of evaluating the vulnerability-prone points in the network
    for loopholes. That being said, advanced adversaries typically understand network administration more than their victim administrators. This is why misconfigurations or 
    poor network designs are uncovered.

+   <u>**Basic strategies for Computer Network security assessment**</u>

    Assessing Computer Networks most often begins with a network scan for live hosts and exposed services. Then a comprehensive analysis of these exposed services for
    0-day or known vulnerabilities. Network assessment may also begin with an attempted DNS transfer. We will introduce these techniques more in-depth at a later time.

+   <u>**Programming and Scripting**</u>

    Python will be used for scripting small tools, not because these tools do not already exist but to improve our understanding of packet structure and
   raw communication. Basic knowlege of the python programming is required.

+   <u>**Tools**</u>

    +   ping, nmap

    +   traceroute, nslookup

    +   Wireshark, iptables etc

    More tools, and more on these tools will be uncovered as we deem necessary