/** Basic Knowledge: Ports

        Bellow are the following port numbers different services on systems use by default, as well as the most common one's you'll need to know for the CEH exam plus 
        extra.. There options to change them, but unless specified by the end-user, will defaullt to their respective port. Understanding the various ports you'll come 
        accross is crucial, in that it makes narrowing down your port scan prioirties a bit easier, as well as giving you more insight as to which ports to look out 
        for during your recon phase of an attack. A good tit bit of information. If you ever find yourself having access to system(s) on a netowrk, consider "opening" 
        ports that would benfit you best.

        WHEN READING IDS LOGS, IT IS ESSENTIAL THAT YOU KNOW THE COMMONLY USED PORTS IN PENETRATION TESTING TO BETTER DISCERN THE RIGHT ANSWER

        20:

            FTP data transfers occur on port 20

        21: 

            FTP command control, which handles the establishment and setp up of data channel communications
            between client and server occur here.

        22:

            SSH protocol, which provides a more secure for of data communication through means of encryption occur here.

        23:

            Telnet, a service that allows for remote access communication between devices occurs here.
        
        25:

            Email routing and SMTP protocols, which handle the data communication and transfers of emails occurs here.

        53:

            DNS services opperate here. 

        80:

            HTTP protocols which handle network/internet data communications and data transfers from webservers occur here.

        110:

            POP3, the post office protocol, which handles the process of client recieving emails from servers occurs here. This form
            of communication is insecure. 

        119:

            NNTP, which serves in the handling of network news, as well as the reading and posting of news articles by end-users occurs here.

        135: IMPORTANT FOR ATTACKER

            The RPC, remote procedure protocol, which is essentially a windows service that allows for reverse shell functional, allowing systems on 
            a network to excute commands and various other actions on other systems on the network that run the service. NetBIOS traffic also occurs here.

        137: IMPORTANT FOR ATTACKER

            "NetBios over tcp/ip", which allows data communication between systems on a network occur here. This port 
            can be used to discover information about targets that utilize this protocol using NBTSTAT. These are also known as DCOM services, which stand for 
            distributed component object model. Hackers can sniff out these ports to find these types of services running on these machines

        139: IMPORTANT FOR ATTACKER

            File and printer sharing occurs at this port, and is a major vulnerability port, so much, that firewalls block traffic on this port by default. This port also leaves
            HDDs exposed, making it easier for attackers to compromise the system. SMB, server message block, as well as netBIOS traffic and null sessions also occurs here.

        443:

            HTTPS and TLS/SSL, which are more secured, encrypted forms of data communication for network communication occur here.

        445: IMPORTANT FOR ATTACKER

            Newer version of remote communication and SMB file sharing for windows systems that doesn't rely on a NetBIOS layer to enable communication between systems on a network. 
            Another major port attackers will also sniff out to compromise systems. Null sessions also occur here.

        514:

            Syslog information is handled at port 514

        636(TCP)/389(TCP and UDP):

            Port 389 is a TCP and UDP port that is default for LDAP protocol. 

            Port 636 is where LDAP operates as well, but uses SSL/TLS for it's data communications and is soly a TCP port.

        1146: IMPORTANT FOR ATTACKER

            This port is used to engage in buffer overflow attacks against DNS servers on port 53

        1812 and 1813:

            RADIUS protocol, which helps provide more secure remote data communications operate on port 1812 and 1813.

        143:

            IAMP, internet message access protocol, which allows users to back up their emails, operates on this port.

        TCP Port 993:

            IAMP over TLC protocol operates here.

**/
