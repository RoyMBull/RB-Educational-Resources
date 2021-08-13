/** Access Control Systems
   
    Control System Architectures/Access Control Systems:

        Bellow are the following access control system types, which dictate authorization to various resources on a variety of different networks and 
            systems.

            Industrial Control System(ICS):

                ICS's, industrial control systems are hybrid access control systems that use a variety of different access control methods in order to 
                manage level of access to resources in an organization.

            Role Based Access Control(RBAC):

                RBAC, Role Based Access Control systems, manage access to resources based on users role within an organization.
        
            Attribute Based Access Control (ABAC):

                ABAC systems manage access to resources based on characteristics associated with users rather than roles.

            Supervisory Control and Data Acquisition(SCADA):

                SCADA systems are deployed on facility remote locations in order to gather real time data about various systems on a network, kind of like how a SNMP 
                behaves.

            Hardware Security Module(HSM):

                HSM, hardware System Management, are devices dedicated to crypto key management: assigning keys and issueing digital certificates, issuing and revoking 
                keys, etc etc, much like what PKI system does.

            Online Certificate Status Protocol(OCSP):
                
                OCSP's allows users to request digital certificates, which contain informaiton about crypto keys, typically assigned by a crypto key system, such as a 
                PKI or HSM for example.

            Unified Thread Management(UTM):

                UTM, unified thread management systems, are essentially an ICS device that uses a variety of different access control methods, along with different 
                security mechanisms to mitigate security threats

            Granular Access Controls(GAC):

                Granular access controls revolve around the fine tuning of access to resources on systems, as well as what end-users can do with that form of access, and is very time consuming to implement.

            Discretionary Access Control(DAC):

                DAC, discretionary access control systems, allow system administrators or officials, to selectively grant authorization of resources to users.
            
            Mandatory Access Control(MAC):

                MAC, mandatory access contnrol systems, control the level of authorization to resources in file systems.

            Geography Based Access Control Systems(GABC):

                GBAC, geographical based access control systems, which are used by location based access control systems that operate in one location, are control systems that restrict access to resources depending on 
                a certain geographical location, but can also include: IP, OS, etc etc.

            Physical Access Control(PAC):

                PAC, physical access control systems, restrict access to physical locations within facilities, such as biometric systems for server farm rooms.

            Logical Access Control(LAC):

                Logical access control system manage the various authentication and authorization methods that are used in systems.

            Location Based Access Control(LBAC):

                LBAC's, location based accessed control systems operate by authorization of resoures based on a geographical location, collecing information from: GPS coordinates, MAC addresses, IP address, etc etc, all in 
                order to verify authorizationn is occuring via the right geographical coordinates.

            Rule-Based-Access-Control:

                The other RBAC, rule based access control systems, restrict access to resources at specific times of day.

            Network Access Control:

                NACs, network access control systems dictate who is able to access a network

                NAC Agents:

                    Bellow are a few sub categories that incorporate NAC.

                    Permanent:

                        Permanent NAC agents are typicall deployed on organization owned devices, allowing only those devices to access teh network

                    Dissolvable:

                        Dissolvable NAC agents are temporarily loaded on systems to authenticate for network access, such as portals when accessing either a public 
                        or private network.

                    Passive:

                        Passic NAC agents are essentially signature and anomally based IDS's
                    
                    Stateless:

                        Statless NAC agents monitor the soruce and destination of packet data, kind of like what a switch networking device does

                    Stateful:

                        Stateful NAC agents monitor the packet and flag contents for data communications, ensuring the right packets are being exchanged per communication 


**/