/** Networking Protocols
 
    Protocol Related Information:

        Protocol Header:

            Protocol headers are essentially the "to: and from:" identifier at the beginning of IP packet data, exchanged during data communications

        Spanning Tree Protocol(STP):

            STP, spanning tree protocols, help prevent routing loops, which consume high levels of bandwitdh that could potentially compromise network systems.

        Distance Vector Protocols(DVP):

            DVP, distance vector protocols manage arrays that control network node distances.

        FTP Protocols:

            FTPS:

                FTPS, FTP over SSL, is essentially what HTTPS is to HTTP, providing a more secure form of FTP data communication.

            SFTP:

                SFTP, SSH FTP, provides more secure and encrypted FTP data communications.

        Useful Network Protocol Information:

            Network Time Protocol:

                The network time protocol servers to synchronize time on Linux systems through NTP servers. 

            Internet Relay Chat:

                The IRC protocol serves as a sort of real-time chat messaging tool for users, developed in 1988. It's sort of like the facebook messenger
                or other related messaging services of today.

            Guessing Sqeuence Numbers:

                TCP protocol lets you guess sequence numbers.

            Graphical Identification and Authentication DLL:

                GINA provides secure authentication and login services, as well as loading up the CMD shell for windows systems: 2000, XP, and windows server 2003.

            SNMP Vulnerabilities:

                SNMP, or Simple Network Management protocol, which manages systems on a network by sending data packets in order to gather information about them, is flawed 
                in that the community string data exchanged is in clear text format, which can easily be intercepted by the attacker. The second biggest flaw is that it's 
                on EVERY, almost EVERY computer security system, which means theres ractically ennough knowledge to compromise the system if not better means than SNMP are 
                implemented
        
                    * They use community strings that is essentially transmitted in clear text
                    * It is used by all network devices on the market.
                
                The following Tools are good for enumeration the SNMP protocol:

                    * SNMPUtil
                    * SNScan
                    * Solarwinds IP
        
                * SNMP allows hackers to gather great amounts of information because it incorporates the following features
                1: It uses community string that is transmitted in clear text.
                2: It is used by all network devices on the market.
**/