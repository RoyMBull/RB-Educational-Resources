/** General Information:

        Employee Turnover:

            Employee turnovers reffer to the replacement of employees that either have resigned or have been terminated 
        
        Bring Your Own Device(BYOD):

            BYOD reffers to employees being able to bring their own mobile devices to work: tables, smart phones, etc etc
        
        Geotagging:

            Geotagging reffers to the meta data, which contains unique information such as geographical information that is captured and reco
            from either photos or videos 

        Data Execution Preventionn(DEP):
            
            DEP's are installed on OS's and blacklist memory pages that may be corrupted; another means to essentially combat 
            memory viruses such as a memory level rootkit DEP's are a case example as to why memory root kits, which contain a set 
            of tool kits to modify sections of memory, replacing them, leaving viruses that infect the system, are nearly extinct. 
            Aside from memory being wiped, which removes the rootkit, if for say, a user who likes to leave their system on, DEP's have 
            the ability to blacklist sections of memory that are corrupted, and are built into OS's.
        
        Full Disk Encryption(FDE):

            FDE is full disk encryptions. It involves enumerating all the file systems on a system, ecnryting them in the process. For defenesive 
            security this is done to prevent access to files until the user authenticates. For malicious reasons this method of disk encryption is 
            used in ransomeware.

            Screen Locking isn't recommended in order to better preserve effective full disk encryption


        Multifunctional Device(MFD):

            Multifunctional devices are multipurpose devices that serve a multitude of functions in one such as a smart phone for example, which is essentiallg:
            a calculator, can deposit checks, camera, etc etc

        Embedded Systems:

            Embedded systems are the core components that make up an entire computer system, such as a computer, or a gaming console, even a raspberry pi, those are 
            embedded systems.

            Typically in other embedded systems besides the standard PC, a security risk of control of a mechanism in the physical world is prevalent

            Embedded systems may also reffer to computer systems implemented in a large system, such as an IDS for example.
        
        Monolithic Architecture:

            Monolithic architectures condense all code and resoruces into one location, essentially what containers are in computing security. Monolithic structures 
            are highly succeptible to high scale attacks. 
        
        
        Sandboxing:

            Sandboxing is performed on untrusted/unrecognized software, and is typically deployed to test such software for any possible security threats that may effect 
            the system or network 

        
        Checking if Tape/HDD data is recoverable:

            In order to check if data is recoverable, check for system restore points. A system restore point will essentially revert your system to a previous state, 
            typically uninstalling and removing programs that might have lead to a system malfunction or compromise. 

            System restore is also known as revert to known state

        DNS Record Types:   

            AAAA Records serve for IPv6 address resolution records.

        Container:

            Containers, which are apart of the monolithic architecture, packaging up all code and dependencies into one location. Succeptible to high scale attacks due 
            to lack of isolation/segmenting of resources.

        Getting Information From E-Mail Web Servers:

            Studying the errors from email web servers can help an attackers learn about the system. In order to achieve such a goal, an attacker will send an email to 
            an illigitamet destination in order to recieve an error message from the server   
        
        Database Structures:

            SQL:

                SQL databases have a relational structure

            LDAP:

                LDAP databases have a hirearchical relationship

        Whitelisting:

            Whitelisting is a means to help prevent malicious code execution, whitelisting legitamete programs, allowing them to run
        
        Reguarding explotation frame works, the following is true:

        * They fully exploit vulnerabilities
        * Allow for cusomized test elements 
        * Represent additional risk to the enviorment

        Security Template:

            Security templates are text files that represent/contain system configurations

            They can also do all of the following Except Return a target system to it's precompromised state

            * Capture the security configuration of a master system
            * Apply security settings to a target system
            * Evaluate compliance with security of a target system.

        Dev Ops:

            Dev ops allow organizations to automate the following elements of IT management:

                * Development
                * operations
                * security
                * quality assurance

        Bollard:

            Bollards, which are short study polls typicall in the ground surrouning facilities, can help prevent vehicles from damaging them
       
        Kiosk Mitigation:

            In order to prevent unauthorized enteties from making changes to kiosk systems, authentication aspects need to be adjusted        
        
        Calculating Effective permissions:

            accumulate allows, remove denials
        
        Types of User Accounts:

            Service:

                Service accounts are best to use when installing a new network service application that requires a variety of permissions on several 
                resources, as well as a few advanced user rights in order to operate properly.

            User:

            Priveledged:

            Generic:

        Preserving Reliable Password Complexity:

            To better preserve password complexity, use a minimum of eight characters, including representation of at least three of the four 
            character types

        Back Up Types:

            Differential backups:

                Differential backups back up all data since a previous full backup.

            Incremental backup:

                Incremental back ups reffer to the backing up of sections of data. Think of them as selective partial backups, backing up different portions of data rather than the whole system.

                Upon running full backups, as well as differential backups, should there be a driver failure, perform a restore on the full back up, and then the last
                differential backup
        
        Mandatory Vacations:

            Mandatory vacations can be used in order to evaluate system administrators for auditing.

        Job Rotation:

            Job rotation helps mitigate against lack of administrative staff not being present in order to perform critical tasks for maintaining security.

        Tolerance Method:

            Tolerance is a method used to address and document security risks that have been avoided.

        Legal Hold:

            Legal holds are performs when an organization is sent a lawyers letter demanding that they retain specific records, logs, and other 
            files pertaining to suspected illegal activity in an organization.

        xDNS:

            xDNS are proprietary forms of DNS servers, still serving the main funcntionals of a standard DNS

        EMI:

            EMI, elctro magnetic interference, is the disruption of electronic devices and electrical components due to the RF 
            interferences of devices such as a radio or television.

            EMI can also cause consistent drops in network connectivity between devices. Microwave ovens can cause this anomaly.


        ESD:

            ESD, electro static discharge, is the build of of static electricity through turbocharging, which is the process of two objects 
            making contact and then separating, such as rubbing your feet on a rug for example, generating ESD which is lethal to electrical 
            components.

    
        EMP:

            EMP, electric magnetic pulses, are weapon like devices that are capable of generating a massive electromagnetic field that disables 
            electronic devices.

    
        RFI:

            RFI, radio frequence interference, occurs when radio frequencies interfere with the following devices: television, radio, or telephones.
    
        Deguassing:

            Deguassing is the process of removing all data from HDD's/Tapes.

            Destroy methods focus on making devices non-funcitionalble where as purging focuses on whiping data, degaussing the device.

            Data sanitation also helps prevent data compromization on end-of-life systems and devices.

        TPM:

            TPM, trusted platform modules, are computer chips capable of secure data computing, and safe keeping of credentials used to provide authentication 
            and authorization of resources to PC's.
  
        System Sprawl:

            System sprwals are vulnerabilities found in organizations that have oversaturated their quantity of adequate systems needed to function properly, leaving many underutilized
            and vulnerable to attacks.

        Succession Planning:

            Succession planning occurs when there is a change in authoritive position, such as the stepping down of a CEO or systems administrator for example, seeking potential new candidates 
            to fill the role.

        RAID:

            RAID are integrated HDD systems that serve to provide more storage space, as well as boost the speed of storage devices by integrating them as if they were one system, essentially clusters
            but for hard drives.

            RAID 0:

                RAID 0 boosts the speed and storage of all HDD's connected, however, should one HDD fail, all data will be corrupted/lost.

            RAID 1:

                RAID 1 mirrors all data between all HDD's interfaced, essentially creating "hot swappable" backups of all data, where should one fail, the other remaining ones will preserve all data and operations.
                Two take aways is the decrease in speed since all data is being written multiple times, and the doubling of HDD space required which can be cost effective. In a RAID 1 HDD system architecture, should 
                you need to back up 50GB's of data, you'll need 100GB now.

            RAID 5:

                RAID 5 contains a mixture of elements from RAID 0 and 1, boosting the speed and storage capacity of interfaced HDD's, while providing fallback. The only catch is you must have a minimum of 3 HDD's available, 
                so the number of fallbacks you have essentially decreases, which is one of the take aways.

            RAID 6:

                RAID 6 is essentially like RAID 5, except only 2 drives can be loss no matter what the ammount is before all data is loss.

        Fire Extenguisher Classes:

            Class A:

                Used on ordinary fires

            Class B:

                Used on the following types of fires: greese, gas, oil, essentialy liquid fires

            Class C:

                Used on electrical fires

            Class D:

                Used on flamable metals
       
        Framework:

            Frameworks are descriptions of complex processes that concentrate on major steps and flows between the steps. 
            
            Frameworks are also known as a collective of tools and resources to accomplish a certain task, like the PYQT5 
            
            framework whose goal is to tackle GUI application development in python.

        Data At Rest:

        Data at rest is data that ins't actively being moved or transported between devices, typically stored on storage devices. 
        Symmetric data encryption is typically used on storage devices.

    Security Problems/Consideration:

        Bellow are some possible security problems that could lead to the compromising or failure of a system.

        Single Point of Failure(SPoF):

            SPof, single point of failures, refer to non-redundant parts of a system that, should they ever malfunction, would lead to the compromise of the system.

        Reduntant Connection:

            Typically seen in fiber optic networks, that allow for multiple pathways for data communication, too many, could possibly slow down bandwith, potentially 
            causing the network to fail.   

    Wireless Antennas:

        Cantenna:   
             
            Cantennas are antennas made from cans, which can either help boost signal reception, or signal strenght for networking devices.

        Yagi Antenna:

            Yagi antennas are used in satelite communications and operate at 10MHz frequencies

        Rubber Ducky Antenna(Helical Antenna):

            Heilical antennas, which are what rubber ducky antennas essentially are, emit circular polarized waves that operate on 100MHz to 5.9GHz fequencies, and 
            are also used in satelite communications. 

            Rubber duck antennas, or Hielical antennas, can are bidirectional and can send and recieve data/signals in both directions.

        Pannel Antennas:

            Pannel antennas are used to boost cellular network ranges, and are flat pannel antennas.
    
    EDIT THIS!!!!: LDAP Definition

            LDAP (Lightweight Directory Access Protocol) is an open and cross platform protocol used for directory services authentication. 
            LDAP provides the communication language that applications use to communicate with other directory services servers.


    Cluster Configurations:

        Cluster:

            Clusters are data servers intergrated to behave as one whole server

        Active Active:

            Active active cluster configurations mirror all data and configurations accross all servers in order to allow "hot swappable" backups should one go down.

        Active Passive: 

            Active passive cluster configurations function sort of like warm sites, where they contain all the neccessary component and resources to replace dead servers, should 
            the main one go down. Unlike active active configurations, which are highly responsivve and start immediately should a server go down, active passive one's 
            are merely there as a raw form of backup and take some time to re-integrate back into the cluster configuration system.
       
        Fencing:

            Fencing is the process of isolating nodes of computer clusters, as well as protecting shared resources should nodes appear to be malfunctioning.

            Characteristics:

                * Gauge
                * Height
                * Mesh 
    
    Extra Information:

        MX Record:

            MX records specify servers responsible for the handling and accepting of email messages on behalf of domain names.

            MX Priority:

                Should the server hosting all your emails go down at any time, MX priority mail servers hold that information for you.
    
        IDS Log Information:

            /bin/sh:

                This directory, should it be seen in IDS logs, indicates an attempted command line attack from an attacker. 

        Useful directory Information:

            /var/log:

                This directory tracks user logins on Linux systems.

        ipconfig commands:

            ipconnfig /flushdns:

                Eliminates DNS cache

  

**/