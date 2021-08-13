/** Refresher Pad:

    Attacking Various Systems:
    
        Now that you've finished conducting your assements, and going about your recon phase, gathering 
        as much informatinonn as possible, the next step, of course after you've thread moddled all possible 
        vulnerabilities, is to begin the exploitation phase, testing the system against all possible vulnerabilities.

    Steganography:

        Steganography is the art of masking data within other forms of data. A good example of this is a 
        simple DLL/Code injection based attack disguised as another program, that when run, will run malicious
        code instead.
    
    Attack Methods:

        Now that you're ready to begin attacking said systems, you should be mindful of the other various forms of 
        attacks, that will aid you during your pen-test.

        Passive Online Attacks:

            Passive online attacks involves the use of passive sniffing techniques in order to capture packet data
            that might contain password information. A good example of this is good old classic Aircrack-ng, a passive
            tool that sniffs out 4-way-handshakes, you can then brute force in order to get the password for a Wireless
            access point
        
        Tapping:

            Tapping involves eavsdropping and checking various forms of decoded correspondences such as phone calls, texts, 
            and emails.

        Encryption Attack:

            Encryption based attacks, also commonly refferred to as brute forcing attacks involve trying a series of plausible passowrds
            from a collective of wordlists, whether it be one word at a time, or a mix up/combination of the two. Bruete forcing rates 
            vary depending on your processing power capacity.

        Traffic Analysis:

            Traffic analysis involves observing website traffic in order to pinpoint what websites end-users are using. This is an effective 
            footprinting tools.

        Hybrid Attacks:

            Hybrid attacks consist of a combination of dictionary based attacks, which are basic level brute forcing attacks that try all possible 
            words from a wordlist in an attempt to crack the passowrd, while mixing in an algorithm that will, for example, modify 
            each word, trying all possible word possibilities from the letters in the word, exhausting maximum word possibilities before moving
            onto the next word. Basically, if you have a word that can make 5 different words depending on how you arrange the letters, than that one 
            word, can be stretched to 5 attamps, stretching the depth of your encryption based attacks.

        WaterHole Attack:

            After proper traffic analysis, you'll be able to dive more into water hole attacks, where you take advantage of the websites
            places or individuals visit and use most often. You can craft attacks such as a DNS spoofing attack in order to modify the DNS
            records of those sites, sending users to a fraudulent site in order to steal various forms of sensitive data.

            Waterholing attakcs can also be used to sniff out suspicious activities such as sites or pirated services running on systems on the network.

        ShellShock Attack:

            Shellshock attacks involve taking advantage of vulnerabilites shells, or the terminal of a system, primarily UNIX shells in order to
            gain remote access to the machine.

        Command-And-Control Attack:

            Once you've successfully made an attack and have access to the network on some level, you'll want to launch this type of attack to take advantage
            of your access to the network, using a infected machine you have control over to compromise other systems infected and steal data from them. 

        Wrapping Attacks:

            Wrapping attacks are a form of man in the middle attack, involving the interception of a message, reading it, then modfying it, leaving no trace of 
            such fraudlent descrepencies.

        Side-Channel Attacks:

            Side channel attacks more observational, and relly on noticing "leaks" of data. For example, listening to the sound of keys to desipher kestrokes, or 
            sniffing and analyzing traffic data to get credentials. Side channel attacks are passive.

        Cross-VM Breach:

            Side Channel attacks that target virtual machines.

        Ping of Death:

            Anohter means to cause e DOS attack, ping of death attacks involve sending large quantities of oversized packets in an attempt to cause a DOS.
    
        Smurf:

            Smurf attacks are large scaled DOS attacks that broadcast large oversized packets to all systems on a network through the use of ICMP.
    
        Peer to Peer Attack:

            Peer to peer attacks involve taking advantage of systems on a network that act as both client and server in order to launch DOS attacks.
            Peer to peer attacks don't incorporate ICMP messages.
    
        Fragmentation:

            Fragmentation related attacks exploit IP packet data fragmentation. When sending data to other systems, they utilize IP packet fragmentation to propely recompile fragmented IP data packets. Each said systems have 
            a capacity as to how much data they can handle fragmenting at a time. One or two is not a problem,  but fragmentation attacks, exploit this weakness in that they bombard massive ammounts of IP data packets that exceed
            the capacity of what normal systems can handle. This is a form of a DOS attack.

            Fragmentation attacks involve taking advantage of the limitation and handling, as well as the processing of fragmented data by sending oversized packets that exceed the amount of data that can be fragmented, and in excessive quantities 
            
        Volmetric:

            Volmetric Attacks involve eating up bandwitdh on a network in order to slow or crash the network. This is a form of a DOS attack.

        Application:

            Application level attacks exploit the vulnerabilities of various applications, which can lead to usage of covert channels.

        TCP-State-Exhaustion:

            These forms of attacks focus on compromising a variety of different infrastructures, such as cloud service infrastructers for example like: IAAS, IAAS Network, etc etc.
    
        DRDOS & Bouncing Attacks:

            DRDOS attacks, also known as bouncing attacks, rely on using servers on networks to bombard massive ammounts of UDP datagrams to comrpomise other servers.
    
        TearDrop Attack:

            Teardrop attacks involve sending overlapped fragmented to systems and devices in orer to cause errors and crashes.

        Shimming:

            Shimming is a form of credit card theft. Essentially, credit/debit card skimmers that serve as pieces of hardware that extract chip information from credit/debit cards.

        Daisy Chaining:

            Once a user has gained access to a network, and is currently pivioting their way through the system, the attackers attempts to
            connect multiple devices to eachother through interconnections between each pairs of systems, creating a link of chains

        Pivoting:

            Pivoting involves an attacker manuvering their way through a network system after gaining access in order to locate new potential targets.

        Collision Attack:

            Collison based attacks feed plain text data into hashes in order to search for matching outputs.

        Threat Actor:

            Threat actors are the engagement of malicious activity whether intentional or unintentional. A good example of this would be 
            a script kiddie launching a DDOS attack against PSN game servers to deny service.

        Refactoring Attack:

            Refactoring attacks try to replace device drivers with files that will add some sort of malicious payload to the system.

        Jamming:

            Jamming occurs when an attacker sets the power levels on rogue access points to overpower wireless transmissions of legitamate access points, essentially
            jamming their signals.

        Beaconing:

            Beaconing is essentially "heart beat" attacks, but for hackers, allowign hackers to send small bits of data packets in order to check whether compromised systems 
            are still alive and well.

    DDOS Tools:

        R-U-Dead-Yet?(RUDY):

            RUDY based attacks utilize an excessive amount of POST requests in order to starv available sessions on a web server. 

    Cain and Abel:

        C&A is a windows only password recovery tool that can also serve as a collective for the following attacks: tapping, encryption,  and passive online attacks.

    RootKits:

        Root Kits are an essential in your arsenal for attacking systems. Rootkits are essentially kits of viruses intended to infect a system in a variety of different 
        ways.

        Hypervisor Level RootKit:

            Hypervisor level rootkits allow you to run an existing OS inside a virtual machine. These forms of rootkits 
            operate at the virtualization software level of a machine.

        Kernal Level RootKit:

            Kernel level rootkits operate at the kernal level of the machine, the API in a sense, the biological makeup of how hardware and software 
            interact with one another on the system, which is extremely powerful, in that you can literally pupitier the machine itself.
        
        Virtual Level RootKit:

            Virtual level rootkits infect systems by embeding themselve under the existing OS, causing it to run as a virtual machnie on top of the 
            VMBR one in place. VMBR's is basically the shorthand for Virtual Machine Based Root kit. These forms of rootkits are extremely difficult to 
            detect, even locate, as well as being difficult to write and instally on machines. 

        Library Level RootKit:

            Library level rootkits are essentially a collective of programs that modify the behavior of other programs and their system calls. A good 
            example of this is a simple DLL/Code injection, causing a program to behave in a manner not intended to.

        User Mode Level RootKit:

            User mode level rootkits function to replace programs and applications on a systems with frauduelent ones, as well as display false information 
            to the user.

        Boot Loader Level RootKit:

            Boot loader level rootkits, also another rootkit that is extremely difficult to detect, embedes itself at the masterboot record, making even it's removal,
            if found, nearly impossible due to a possibility of damaging the system. The flipside to this is that these forms of rootkits are nearly extinct, and essentially
            obsolete due to safe boots enabled on many OS's such as windows for example.

        Memory Level RootKit:

            Memory level root kits, probably the worse of the bunch, operates at the memory of your computer. These types of rootkits are easily removed when the end-user 
            reboots their PC.

    DDOS Tools:

            The following tools:  Trinoo, TFN2k, WinTrinoo, T-Sight, and Stracheldraht are all DDOS tools
                
                * Trinoo
                * TFN2k
                * WinTrinoo
                * T-Sight
                * Stracheldraht
    
    Net Use Command:

        The "net use" command is also used to connect to resources from other devices on a network. Upon usage, will grant the system 
        access to a drive containing files and other resources shared remotely, that will remain mapped and accessible even after the system reboots.
    

**/