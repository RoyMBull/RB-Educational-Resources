/** Refresher Pad:

    Basic Knowledge: NetWorking Termonology

        It's highly recommened you cover these basic concepts. Over the course of your career, as well as any certs you may take information security
        and network wise, will require you to have some basic level of understanding of in order to properly understand the questions being asked.

        Bellow are some areas of basic knowledge advised to cover for the CEH exam.

        OSI Model:

            On a networking level it is a MUST to know and understand the OSI model. There are 7 layers, from top to 
            bottom, the: application layer, presentation layer, session layers, transport layers, network layers, data link
            layer, and the physical layer.
        
            7. Application Layer:

                The application later is essentially the GUI of all the web applications, various applications in general, that 
                the end-user sees: chrome, skype, etc etc.
            
            6. Presentation Layer:

                The presentation layer is the handling of of data to applications and/or the network. A good example would be the 
                encryption of network data channels through SSL, or the data being encoded in a certain format, which will then be 
                safely encrypted and handled for the application.
            
            5. Session Layer:

                The session layer is where various forms of data communication take place, either via network between different IoT 
                devices, or via applications. The session layer dictates the setup and establishment of a connection, as well as the 
                TTL of the connection. 

            4. Transport Layer:

                The transport layer handles the transportation of data such as the source and destination, where the data is coming from, and 
                where it is going to. Think of the session layer as the post office, handling the shippment of packages.

            3. Network Layer:   

                The network layer is where router functionality occurs. Of most importance to network professionals.

            2. Data-Link Layer:

                The data link layer is where the functionality of a switch occurs.  The data-link layer also contains two sub layers: the media access 
                control layer, and the logical link layer (MAC & LLC layers for short). The data link layer also handles node-to-node data transfers, which 
                are the intersections of where data meet, as well as handling any errors from the physical layer.

            1. Physical Layer:

                The physical layer is the physical layout of the network: cables, adapters, and varous other networking devices and other means to set up the network.
        
        Networking Terminology:

            Node:

                A node is a point of intersection where data transmissions overlay/overlap.

            Link Layer Address:

                A LLA is the MAC addresss of a system that is provided to it upon access to the network. 

            Address Resolution Protocol(ARP):

                The address resolution protocol is utilized to sort of act like a reverse DNS lookup, matching LLA's to corresponding systems on a network.

            Subnentting:

                Subnetting is spliting an IP network into multiple sub networks, typically providing 256 unique IP's per network.

            Intranet:   

                Intranets are private networks that allow users to safely exchange data.
            
            Extranet:

                Extranets utilize non disclorue agreements in order to exchange sensitive information and resources about an organization with outside sources on the 
                internet.

            Demilitarized Zone(DMZ):    

                DMZs, demiliterized zones, essentially VPNs, allow intranets to connect to public internet resources more securley

                DMZ's also allow the deployment of publicly accesssible web servers from facilities without compromising the security of intranets 

            Mesh Network:

                Mesh networks incorporate network devices that are much smarter and more effecient at routing network data between nodes on a network than normal routers. 
                They also look a lot better, and automatically download important security updates.

            IPSec:

                IPSec's are implemented on VPN's, which provide sucure connections to public IP's. IPSec's can also be used by attackers in order to assess which VPN is 
                being implemented.
        
            IRC Network:

                IRC, internet relay chat networks are essentially chat enabled communications for basic text messaging. You can join two IRC Networks using the two 
                following commands: 

                * USER 
                * NICK
    
            Static Host:

                Static host are computer systems whose IP address never change.

                Static Host Examples:

                * HVAC systems
                * Game consoles
                * Sweage Pumping mechanisms.
            
            Fiber Optic Network:

                Fiber optic networks provide increased netowrk performanced speed through the use of various networking cables that 
                create more pathways for network traffic to travel on, essentially improivng speeds by not having all traffic be handled 
                in one pathway, which slows down performance. However Fiber optic networks can have a bit of redundacy which is essnetially 
                too many path ways, which can cause a possible compromise of the network itself.

                The major flaw of optic networks is that that are suceptible to tapping, bending, and splicing attacks, as well having as hainv SPoF vulnerabilities.

            VLAN CHARACTERISTICS:

                * VLANS require routing between them
                * VLANS separate hosts into logical networks
                * VLANS can be used to apply security policies and filtering to different segments.
            
            Wrapper:

                Wrappers intercept TCP data transmissions in order to determine whether calls to computer services are legitamate and authorized to execute. 
                They mitigate against host name and host address spoofing.

        Gateway Types:

            Default GateWay:

                The default gateway servers as a node that forwards data for hosts that don't know the destination.

            Media Gateway:

                Media gateways allow for the intercommunication between networkin and various devices that use different networking standards and protocols. A good 
                way to think of this is being able to communicate with someone on a different cellular network than you, or even better, cross play for gamming.
            
            Gateway:

                Gateways are network devices that control the flow of network traffic, as well as the data flow of interconnecting 
                nodes on the network, while serving as a node itself: switch, hub, router, and controls the handling of the routing 
                of network traffic from local hosts on private networks to outband public areas of the net. 

        Address Translations:

            Bellow are the various forms of network address translation.

            Static Address Translation:

                Static address translation allows bidirectional translation of public and private IP address. 

            Dynamic Address Translation:

                Dynamic translation involves the translation of virtual addresses to their corresponding real address, and is performed during a 
                storage refference.

            Dynamic Network Address Translation:

                Dynamic Network Address Translation, unlike static network address translation, which permanetly maps private addresses to corresponding public ones, 
                DNAT allows end-users to selectively do the same, except it's not permanent, giving the end-user free control over which IPs they map.

                It also allows a single public IP address to correlate to a corresponding internal private IP address on an intenral network.

            Dynamic Port Address Translation(DPAT):

                DPAT converts all private IP addresses to the same corresponding public IP address.

            Overloading Port Address Translation:

                Singular IP address providing internet access to all systems on a network. 

    

        
**/