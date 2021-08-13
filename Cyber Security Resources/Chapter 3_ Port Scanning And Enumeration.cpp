/** Refresher NotePad:
 
    What is port scanning?:

        During your recon phase of a pen-test you'll also need to utilize port scanning alongside 
        foootprinting tools to help you further gain information about vulnerabilities on systems 
        once you've gained access to the network. Port scanning tools allow you to scan for live 
        systems on a network, and is the most practical in discovering services running on systems 
        in an attempt to locate vulnerabilities to compromise systems, even the network as a whole,
        should there be a main service the entire network relies on that is succeptiable to attacks.

    Port Scanning Types:

        Ping Sweep:

            A ping sweep scan is most effective at mapping a large range of IP addresses you've footprinted 
            to their respective hosts. Fping is a classic tool that can aid in ping sweeps.

            pint sweeps in genneral, along with ICMP ping sweeps, are used to check for active systems on a network,
            and to check if packet data is being filtered via firewall.

        XMAS Scan:

            XMAS scans involve manipulating the flags of packets when targeting certain systems on the network
            for a scan. For example, you can manipulate the TCP 3 way-handshake by sending certain packets
            with certain flags set to certain systems on a network in order to get a certain response or for 
            other reasons.

            No response indicates the port is closed during a XMAS scan.

        Stealth Scan:

            Stealth scans are most practical on a network that doesn't have an IDS or some type of firewall.
            Stealth scans are exceptional at scanning thousands of ports at a rapid rate, mostly because it 
            utilizes, as it is also known as a TCP SYN scan, this form of scanning where it doesn't complete the 
            TCP handshake allowing ti to scan much faster and pinpoint live systems on networks much faster. 
        
        Full System Scan:

            Perform a FSS when you specifically need to scan a desired singular system, or systems of interest
            on a network to gain more information about services on it.
        
        IDLE Scan:

            IDLE scans involve utilizing a basically dead machine that has next to no connectivity, or machines that
            apear non-active on a network in order to ping and perform scans on other devices on a network. This creates 
            a sort of diversion steering suspicion off the attacker, allowing more effective active reconnassance. 

            If the IPID increments more than two values, then the zombie is not really "IDLE".

        Null Scan:

            Null scans involve sending packets to systems on the netowrk with no flags set in order to discoer if a system is 
            live or not. A response indicates the port is closed. No response will indicate the port is open.
            
            Filtering/and or blocking prts 139 and 445 allow you to perfrom null scans on networks.

        Connection Scan:

            A connection scan involes the OS of a system directly connecting to the target machine and it's respective ports.
            Unlike Stealth scans, also known as TCP SYN scans, connection scans complete the TCP 3 way-handshake.

        Distributed Port Scan(DBS):

            Distributed port scans utilize multiple systems on a network to scan the network for open ports in order to discover potential 
            vulnerabilities.
        
        Scanning UDP Ports:

            When scanning UDP ports, the following possible responses/and or anomalies may occur. 

            * An ICMP error message will be returned
            * The four-way handshake that is used in UDP connections might not be completed
            * Nothing might occur: no response, no error, nothing.
        
        Vulnerability Scanner:

            Similer, but not quite the same as a port scanner, a vulnerability scanner focuses primarily on checking for vulnerabilities on systems. Although 
            the end-goal of port scanning is to search for services running on machines in order to locate vulnerabilities, the first main goal of port scanning
            in general is to locate open ports on a network. Vulnerability scanners focus on only searching for vulnerabilieis, and are heavily used by security 
            auditer during an inspection.

        Angry IP Scanner:   

            Angry IP scanners allow users to scan a range of IP addresses in order to locate live targets on a network.

    Nikito:

        Much the Same as NMAP is the port scanner for machines on a network in order to discover vulnerabilities, Nikito is much the same, 
        except for webservers.

        Nikito also checks for outdated software and misconfigurations on web servers. 

    BannerGrabbing:

        Bannergrabbing is an act of active reconnissance to directyl interact and uncover vulnerabilities about a system or said systems in question.
        This technique is most effective via NetCat or any form of a backdoor program where you can gain a reverse shell and access the system. Telnet
        is also good example.

    FireWalking:

        FireWalking is a form of active reconnissance, in that it can be used to analyze what layer 4 protocols a IP 
        forwarding device may be sending out TCP and UDP packets with a TTL that one greater than the gateway.
        Think of FireWalking as a sort of layer 4 protocol fingerprinting tool.

    TCPView:

        TCPView, similar to what wireshark does, allows you to monitor TPC/IP activity on a network. It also determines the 
        lifespan of data on a system.

        TCP view also tells you in real time which ports are listening or in another state.

    TTL:

        VERY important, TTL indicates the time to live of a packet, which also measures the number of hops a packet 
        can make before it is dropped.

        TTL is also a mechanism of loop protection bassed on elements in IP Headers

    What is the TCP-3-way-handshake?:

        The TCP-3-way-handshake is the communication between client server, and goes in the following order
        1. Client sends a packet with the SYN flag set packet to the server/or target it is attempting to establish a conneciton with.
        2. If recieved, the server will send a SYN/ACK flag set packet back to the client letting it know it acknowledges the attempted 
           connection.
        3. The server will wait a certain amount time for the ACK packt to be sent from the client, else it will send a RST packet, which 
           indicates a termination of a connection. In some cases the RST packet may be an indicator of a suspicious connection attempt being 
           made.

    What is OS FingerPrinting?:

        OS fingerprinting is the process of discovering the OS version of systems on a network in order to 
        pinpoint further vulnerabilities the system may have through studying TCP/IP stack behavior from data 
        packets.

        OS fingerprinting is also known as stack fingerprinting.

        Queso and NMAP can be used for OS fingerprinting.
    
        Active OS FingerPrinting:

            Active OS fingerprinting involves sending packets to systems on a network in order to study the TCP/IP stack 
            behavior in order to pinpoint the OS version and type of the system. Active passing is much faster 
            that passive OS fingerprinting, but more suceptiable to detection

        Passive OS FingerPrinting:

            Passive OS fingerprinting involves the use of sniffing techniques in order to gather information about packet data
            that might contain TCP/IP stack behavior information, to decipher the OS version of a system or said systems.
            Slower but less susceptible to detection.

        DHCP OS FingerPrinting:

            DHCP OS Fingerprinting involves studying the DHCP behavior of a system when it connects to a network. This method is rather
            easy to implement by simply sending a deauthentication packet to either the said device, or by broadcasting it throughout the 
            network, kicking all devices off briefly, forcing them to reconnect to the network.
        

    What is Enumeration?:

        Enumeration is the process of extracting information, and in the case of the recon phase, can be utilized when port scanning in order 
        to extract as much information as possible about a system, which in a sense, is basically what a full system scan 
        achieves, aquiring as much information about the system as possible: user names, programs on the systems, files, etc etc.
        The following tools will aid you during a full system scan where you need to aquire as much information about the sytem
        as possible: USER2SID, SID2USER, & DumpSec.

        USER2SID & SID2USER:

            USER2SID & SID2USER ARE a win32 command line tools that allows you to query the SAM of a machine, as well as extract information 
            about the user's SID. User2sid queries the SAM file first, and then SID2USER will use that information to locate the user names and various 
            other information associated with the user/file.

        DumpSec:

            DumpSec can be used to gather information about permissions and audit settins about filesystems.

    Evasion Techniques:

        Fragmenting:

            Fragmenting is an evasion technique for scanning, which splits TCP headers among multiple packets

    Useful Tools:

        OpenSSL:

            OpenSSL is a linux command line tool that allows users to establish secure TLS/SSL network data communications
                
                Syntax:

                    opennssl s_client - connect www.website.com:PORTNUMBER

    NMAP:

        Options:

            nmap: The NMAP command 
            -v: Prints the version number of the server as well as more information about the scan.
                You can use two v's to be even more verbose with your scans.
            -A: Enables OS and version detection, also known as an aggressive scan 
            -help: Displays all teh options available for NMAP 
            -oG: Formats the output of the data from the scan 
            -p: Scans the port of a target
            -F: fast scan, scanning most commonly targeted ports. Scans 100 ports
            -sV: Scans the version of the OS 
            -sC: Scans with default NSE scripts (Nmap Scripting Engine) to automate the scan
            -O: Remote OS detection using TCP/IP stack fingerprinting
            -traceroute: Performs a traceroute command
            -sn or -PI: Used to identify live targets on a subnet/or network via fast scan
            -open: Provides only open ports from a target
            -sl: Performs a IDLE scan in NMAP
            -oX: Nmap option that outputs the results in XML format
            -sO: to see which ports have been left open on a network when using NMAP switches
        
        Commands:

            NMAP -P 192.168.1-5 (1-5 is the range of subnets)
                Scanning Multiple Subnets with NMAP 

            Nmap -O -p80: can be used to perform stack fingerprinting in NMAP

    


**/