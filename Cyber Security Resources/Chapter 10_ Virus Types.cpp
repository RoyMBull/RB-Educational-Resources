/** Refresher Pad:

    Knowledge of Virus Types:

        Now on to the good stuff, virus types. In this chapter you'll learn about the various virus types ther is.
        Knowing what types of viruses there are will help you learn how to defend against them, as well as learn to craft them.
        RootKits are a collective of viruses so it's essential that you know them.

    Virus Categories:

        There are 8 different Categories of Viruses: Polymorphic, macro, stealth, armored, retro, phage, companion, and multipart/
        multiparite viruses.

        Polymorphic Virus:

            A polymorphic viruses have the ability to mask their own code by means of encryption. Code that can't be deciphered will be 
            harder to detect due to obfuscated properties.

        Macro Virus:

            Macro viruses exploit the scripting abilities of various productivity software, as well as the tendency to hide themselves in 
            documants and emails.

        Stealth Virus:

            Stealth Viruses prefer to hide and mask their activities, in order to prevent their sequence patterns from being detected and stored 
            by various intrusion detection system anomalies.
        
        Armored Virus:

            Armored viruses are viruses that equip themselves with various forms of maleware that make them less detectable AND removable in case they are 
            detected, much like how for example, Bootloader level root kits hidden in the master boot records are hard to remove due to 
            a possibility of damaging the system. Very obfuscative techniques also help with being hard to remove from the system.

        Retrovirus:

            Retroviruses are designed to neutralize any form of antivirus system that detects/removes maleware.
        
        Phage Virus:

            Phage viruses modify kind of resemble the behavior of a worm. However instead of spreading accross networks, infecting many systems, these types of viruses
            spread throughout a singular system, infecting as many parts as possible, preserving itself, regenerating should a part be removed. This makes them EXTREMELY 
            hard to get rid of and might mean replacing the whole system.

        Companion Virus:

            Companion virus are what make up end-user rootkits. Companion viruses takes on the root name and file extension of a file, waiting for the end-user to launch it.
        
        Multipart/Multiparite Virus:

            Multiparite viruses perform multiple tasks simutaneously and infect systems in a variety of ways. In a nutshell this is what a hybrid virus is, containing a mixture of 
            other qualities from different virus categories in order to infect systems in a variety of different ways.

        Crypto Maleware:

            Crypto malware are viruses that utilize encryption based attacks, whether it be for defence, like a polymorphic virus, or offensively, like ransomeware.

    Virus Types:

        Below are the various types of viruses that incorporate the behavioral traits of the 8 virus categories previously described, shown above.

        Sparse Infector Virus:

            Sparse infector viruses function as a 50/50 virus in order to avoid detection, since IDS's will often pick up on malicious behavior based on the frequency of malewares 
            sequence patterns. Sparse infector viruses don't activate quite often so IDS's and other means of anti-virus software won't catch on as quick as they should. 

        Hybrid Virus:

            Hybrid viruses are what multiparite viruses are, containing a the behavioral trait of different virus categories to infect systems in a variety of different ways, while also 
            being possibly extremely hard to deal with if done correctly.

        Meramorphic Virus:

            Meramorphic viruses have the ability to modify their own code. Very extrordinary and difficult to write.

        Cavity Virus:

            Cavity viruses utilize steganography techniques to mask themselves in various forms of data.

        Trojan Virus:

            Trojan viruses display fradulent information to the end users, such as spoofed websites and advertisement for stuff and are also incorporated in end user rootkits.
            
            Trojan horse viruses are good examples of PUPs

        Worm:

            Worms operate as a standalone virus that spreads accross various networks infecting a multitude of different systems. 

        RansomWare:

            Ransomeware is a form of virus that utilizes cryptomaleware in order to perpetulate attacks that enumerate and encrypt the entire HDD of a system, locking the user out 
            of their files, requiring a key to unlock them.

        Keylogger:

            Keyloggers as the name would suggest, monitor all keys that are typed, their keystrokes, logging and recording it on a file. Dangerous in that if credentials are being entered 
            by an end user, that information if most likely being jotted down and forwarded to a private server of the attacker, or shipped in an email of some sort.
        
        Adware:

            Although not a "virus" is something advertisement places use to display adds based on user activities. They view cache and cookie history in order to pinpoint probable adds you might like. 
            It's why if you visit a certain site, if you give any apps installed permission of your data, will display it for you. 
        
        Spyware:

            Spyware monitors and collects data about various systems without the end-users knowledge/consent.

        BackDoor:

            Backdoors are basically reverse shells that give you access to a target system. You can: navigate systems, interact with other systems, deposit other malicious code, etc etc. This lets you bypass 
            various forms of security on the system or network. Backdoors very much take advantage of covert channels, essnetially exploiting various communication means: systems, devices, and or applications might 
            have for non-legitamate reasons that violate security policies. Overt channels are the opposite of covert channels and are legitimate ways processes communicate. 

        Remote-Access-Trojan:

            RAT viruses are essentially logic bombs for backdoors, waiting under certain conditions to install themselves onto the end-users system(s). RAT's do giveaway noticable behavior, so do be cautious.

        Bots:

            Bots allow you to escelate the scale of damage that a backdoor allows you to deal to a numerous ammount of systems on a network. Once you've managed to spread your backdoors and infect multiple
            systems, you can script together a botnet that will deliver a massive payload of malicious code to all infected machines. 
        
        Logic Bombs:

            The typical behavior of a virus, logic bombs execute when a certain condition is met. A good example of this would be a companion virus hiding as google chrome. When the end-user executes the malicious 
            program, it will trigger the virus.

        Boot Sector Virus:

            Boot sector viruses, typically seen in boot loader level rootkits, which embede themselves in the master boot record, moves the MBR to another locationn on the hard drive and set themselves in place there. 
            These are typically difficult to remove due to the possiblity of damaging the system entirely. A mitigate against this is secure boots which are enabled on most systems. 

        Potentially Unwanted Programs(PUP): 

            PUP programs are essentially adware that may or may not com prepackaged with software. Take for example, you download an app that gives your phone live wallpapers, but suddenly you're being displayed unwanted adds
            whether or not your device is connected to the internet.

        



**/