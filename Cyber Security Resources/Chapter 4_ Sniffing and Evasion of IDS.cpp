/** Refresher Pad:

    What is Sniffing?:

        One of the third and most important techniques that will aid you during your recon phase 
        of a pen-test is sniffing and evasion techniques. Sniffing techniques involve Analyizng 
        packet/traffic data in order to gain information. It is also helpful to know the kinds of 
        network devices you are interacting with during a sniff.

    What is Active Sniffing?:

        Active Sniffing involves sniffing out data on switch network devices, and like most active related 
        techniques, are most suceptiable to detection. Switch network devices monitor the network traffic of the 
        ports of systems connected to it through a series of MAC/Address tables, which help fiter and monitor 
        the flow of network traffic on a network, ensuring data is going where it needs to be going.

    What is passive Sniffing?:

        Passive sniffin, unlike active sniffing, is done on a hub network device. Hubs unlike switches, don't have 
        MAC address filtering in place, allowing us to sniff all data packet comfortable without fearing detection. Hubs
        broadcast data accross the entire network. Essentially one conversation between 2 machines is in fact heard by all, 
        which in the case of a switch, would not be possible. 
    
    Sniffing Techniques:

        Connecting a laptop to a Switch:

            When you connect a system to the port of a Switch networking device, you'll be able to retrieve the following information:
            List of LLC/MAC address associated and connected to the switch, and all network traffic intended for the system you've connected to 
            the switch itself.

    Sniffing Attacks:

        MAC-Address Flooding:

            MAC-address flooding is done on a switch network device. This technique involves flooding the CAM tables a switch 
            uses to store and remember MAC addresses, flooding the MAC address table of the switch with spoofed MAC addresses, 
            forcing the switch to behave like a hub, allowing us to safely perform a active sniff against the switch.
        
        ARP Spoofing:

            ARP spoofing involves spoofing the ARP requests/replies of trusted MAC addresses of a switch. The goal of this 
            technique is to use a trusted MAC address to overload the switch and force it into forward mode, allowing us to 
            capture traffic on the switch.

            Mitigating against ARP Spoofing:

                The following methods can help mitigate against ARP spoofing, which is essentially modifying the CAM tables of a switch, containing information about the 
                various link layer addresses that are associated with devices connected to the switch in order to capture network traffic.

                Use Port Security On Switches:

                    Enabling port security on switches will prevent unauthorized/unrecognized devices from forwarding packets on the network.

                Monitor ARP activity:

                    Monitoring all ARP activity on the network better mitigates against ARP spoofing attacks.

                Use Static ARP Entries:

                    Refraining from the use of dynamic ARP entries, which can be modified, use permanent entries, which will help prevent ARP Spoofing.
    
        ARP Poisoning:

            ARP poisoning attacks are man in the middle drive, where the goal is to essentially fload the ARP cashe of a target connected 
            to a switch in order to begin recieving any data it sends, sort of like getting a copy of everything it send.
        
            ARP is a form of a Man-In-The-Middle-Attack

        DNS Spoofing/Poisoning:

            DNS spoofing, also known as DNS poisoning, involves spoofing DNS records of a domain to redirect traffic to fraudulent sites.

        SYN-Flood Attack:

            Utilized in Denial-Of-Service attacks, SYN-Flood attacks involve sending massive amounts of SYN packets to a server, requesting a 
            connection, many, at the same time, which will overload the server, preventing other clients from connecting to the server. SYN flood 
            attacks don't incorporate the usage of ICMP messages. 
    
    What is an Intrusion Detection System?:

        Often during your recon phase of a pen-test, you'll come across an IDS, which will change how you can go about
        your port scanning and sniffing techniques, even possibly your footprinting approach when engaging a targt. Intrusion 
        detection systems server as a type of firewall, monitoring network traffic and other forms of activity on a network, where
        they can be customized to handle and report situations as the administrator sees fit.

        Detection Methods used:

            Intrusion detection systems utilize a variety of detection methods in order to remember various maleware activity and
            respond accordingly: signature based, anomaly based, cloud based.

            Signature Based:

                IDS's that use signature detection methods rely on storing "signatures", or the behavioral patterns of either 
                maleware or malicious activity in order to react accordingly. The only downside to this is that should the pattern 
                not be recognized/stored, it's easy to make zero days that will easily bypass the IDS due to the lack of adaptability
                signature based IDS's have.
            
            Anomaly based:

                Unlike signature based IDS's, anomaly based one's rely on machine learning to build a database of signatures; able to 
                compare newer behaviors and intelligently decide whether activity is an actual threat or not, and if so, store the updated 
                or newer signature in it's collective.

            Cloud Based:

                Cloud based IDS's operate by collecting maleware signature patterns from multiple protected devices, essentially benefiting 
                off the IDS collective of other devices, these IDS collectives coming together to form a hive collective of maleware signatures
                that can be referenced should newer systems appear on the network.

        Detection Indicators:

            Upon having multiple detection methods, IDS's also utilze these indicators to decide whether or not to 
            take action

            True Positive:

                A true positive indicator indicates a threat was successfully detected.

            True Negative:

                A true negative indicator indicates legitimate activity was ignored.

            False Positive:

                A false positive or, false alarm, is when legitamete activity is mistaken for an attack.

            False Negative:

                False negative indicate a zero day was used. False negatives are when an IDS should report 
                some form of attack, but doesn't, indicating that the attacker took advantage of an undescovered 
                vulnerability to compromise the systems.
        
        IDS Types:

            Sensors:

                Sensors are deployed in security monitor systems in order to detect and record activities and events

            Network:

                Essentially the most basic of IDS's, placed over networks in order to minotor network activity.
                
                Network IDS systems are unable to detect email spoofing

            Network Node:

                IDS applied to one system at a time.

            Host IDS:

                IDS's that run on all systems on the network, sort of like a beefed up version of a Network Node IDS.

            Perimiter:

                Devices or sensors that detectr possible intrusions. These would be more physical based deterent methods.

            VM Based:

                Much like a Host IDS, a VM IDS is simply a virtual machine with an IDS installed on it. 

        Log Management Systems:

            Centralized Log Mangement:

                CLM, centralized log management systems, consolidate all logs for security log management into one inteface. CLM's are also 
                able to filter through log data.

                Advantages of Centralized Authorization:

                * Ability to centralize security policies and account requirements
                * Ability to use SSO within the entire organization

            Enterprise-Level Log Management:    

                ELM, enterprise-level log managemtn, allows users to filter and aggregate system log data.

            Decentralized Log Management:

                Quite the opposite of CLM, DLM, decentralized log management, disperses all security logs for security log managemnt into different 
                interfaces, which is useful in preventing massive scale attacks should an attacker decide to cover their tracks by modifying security logs.

                In the case of a decentralized log managemnt scenarios, you're essentially individually analyzing log data from individual systems.

        OSI FireWall Types:

            Upon dealing various types of Intrusion detection systems, you'll also have to deal with 
            the following different types of firewall and understand them in order to develop counter
            measures for them: Circuit firewalls, stateful firewalls, packet firewalls, and application
            level firewalls.

            Circuit FireWall:

                Circuit level firewalls monitors 3-way-TCP-handshakes in order to ensure the connections 
                being made are legitamate. What this means is that techniques that involve manipulating
                the connections being made between client and server, for example, sending a ACK packet 
                where there was no connection in the first place, will easily be detected and blocked 
                by these kinds of firewalls. Circuit firewalls operate at the session layer of the OSI model.

                Definition #2:

                Circuit level firewalls, operating at the session layer of the OSI model which serve in the handling and 
                establishment of data communications, the circuit level firewall monitors the legitamecy of handshakes being 
                made in various forms of data communications. They sort of serve like IDS systems, but for TCP data communication 
                handshakes, and can serve as a means to respond accordingly, for example, as a sort of flood gate, preventing the 
                compromising of a server via a DDOS attack should an attacker decide to overwhelm the target server with a SYN flood attack

            Stateful FireWall:

                Much like how circuit firewalls monitor the legitamacy of TCP handshakes and various TCP connections 
                being made, stateful firewalls go a bit further. Not only do they monitor the state of the connection, 
                but the characteristics of the connection as well. What this means, is that any techniques involving the
                manipulation of flags in data packets such as XMAS scans or Null scans would be easily detected, since
                stateful firewalsl will check if a certain kind of connection being made, is recieving the intended 
                packets needed to start and complete the connection.

                Definition #2:

                Stateful level firewalls, operating at the transport layer of the OSI model which establishes the packaging, 
                source and destination of packet data, stateful firewalls perform packet inspection in order to determine if 
                the correct flags are set and are legitamate for a network data communincation taking place, and counteract 
                port scanning methods such as XMAS scans for example, which revolve arond the manipulating of the flags set 
                in packet data sent.

            Application Firewall:

                Application firewalls, or typically known as proxies, or proxy servers, which serve to filter traffic from and to a 
                network, configured manually, is essentially what application level firewall is

                Active:

                    An active application firewall will monitor all connections and validate them, which is very useful in 
                    preventing SQL injection attacks.

                Passive:

                    Passive application firewalls will simply ignore malicious behavior. Not very practical, unless an attacker 
                    figures out a way to force an application firewall to behave passivly, like how MAC address flooding and ARP 
                    spoofing does to allow us to actively sniff out and capture the traffic of a switch networking device. 

        Software Defined Networking(SDN):

            SDN's, software defined networks function simarlly to IDS systems, however they deploy automating software and API's to monitor network systems.
        
        Command Based Tips:

            Snort commands:

                ./snort -dev -l ./log

        Packet Filtering Behavior:

            Egress Filtering:

                Egress filtering is the passive examining, or "sniffing" of packet data.

            Ingress Filtering:

                Ingress filtering is the stateless filtering of network traffic, which is the monitoring of source and destinations of packet data.

        General Information:    

            Flood Guard:

                Flood guards are security mechanisms that mitigate against DDOS attacks by blocking network traffic in high volumes for a specific networking protocols, such as 
                excessive SYN data packets used in TCP/IP data communications.

**/