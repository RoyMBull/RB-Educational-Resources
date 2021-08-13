/** Refresher Pad:

    Attacking IoT devices:

        Now that you understand how to launch basic attacks on systems, as well as basic attack methods on 
        web servers, it's time to go over launching attacks on IoT devices. 

    What is a BlueBugging Attack?:

        Bluebugging attacks are cyber attacks launched on bluetooth enabled IoT devices. If successful, these 
        types of attacks will give you access to the following information: SMS messages, contact logs, etc etc.

    BlueBugging Attack Methods:

        BlueJacking:

            BlueJacking attacks involve sending unsolicited messages to various bluetooth enabled devices whether it be 
            from or to them.

        BlueSniffing:

            Much like we use a WIC with a chipset to sniff out packet data and crack WPA2 4-way-handshake encryptions, or 
            analyzing traffic data, bluesniffing is much the same, except with a bluetooth interface designed to sniff out 
            bluetooth device enabled access points.
        
        BlueSnarfing:

            Bluesnarfing is the acting of stealing data from open bluetooth devices that are left on discovery mode. 
        
        BluePrinting:

            Blueprinting is essentially footprinting, gathering information about different bluetooth enebaled devices.

        BlueBorne/BlueAir:

            Blueborne/blueair attacks are a massive scale attack on bluetooth enabled devices, that affect various devices 
            whether or not discovery mode is on. For as long as the device is powered on, the attack can be launched on it. 
            Think of this type of attack as corona virus #2020
        
        BlueSmack:

            Bluesmack attacks are Dos attacks on bluetooth enabled devices. This form of attack uses L2CAP, a protocol, in order
            to send oversized packets to bluetooth enabled devices.

        HVAC:

            HVAC attacks are bluebugging attacks made on ventilation or air controlled systems like AC units.

    Rooting(Android) and Jailbreaking(IOS) Devices:

        The following methods below allow you to modify/hack android and IOS devices.

        Jailbreaking Techniques:

            Jailbreaking is done on IOS devices such as Iphones for example.

            Tethered:

                A tethered jailbroken device, the least preffered method, requires the end-user to connect their phone to a PC upon 
                boot up each time. EVERYTIME!!!!!
            
            Untethered:

                Unlike tethered jailbroken devices, untethered jailbroken devices don't require the use of a computer upon boot up each 
                time.

            Semi-tethered:

                Semi-tethered jailbroken devices don't require jailbroken devices to reconnect to a computer upon each boot up in order to run.
                However, they do, if you wish to run the modified code that makes up the jailbroken device and it's beneficial features. 

        Rooting:    

            Rooting is what jailbreaking is, but for android devices.

    IoT Tools:

        The following are tools that will allow you to analyze and gain information about various IoT devices. 

        Foren6:

            Foren6 is a tool that can sniff out IoT traffic from various devices. Its sort of like a bluesniff device.
        
        Shodan:

            Shodan is a beautiful device that lets you search for various devices connected online, such as CCTV cameras 
            for example.
        
        Firmalyzer: 

            Firmalyzer is like the port scanner of IoT devices, or the NMAP for them. It allows you to search for vulnerabilities in 
            IoT devices.

        beStorm:

            A more beefier and more practical IoT device analyzer, it does much the same as firmalyzer, detectign vulnerabilities in IoT devices, 
            except that it can do this to products without source code. It is used heavily during software development phases.

    IoT Communication Models:

        Understanding the IoT devices, or the "Internet Of Things", will help you better understand how devices interconnect and interact with one
        another and exchange data. 

        IoT Methods:

            Device-To-Device Communication:

                Device to device communication involves physical contact between two devices in order to exchange data. NFC tech makes this possible. 
                A great example of this feat is the ability to tap your phone on NFC enabled devices to make a purchase, or using your phone to buy a ride 
                on the subway.
            
            Device-To-Cloud Communication:

                Device to cloud communication involves connecting to a cloud to either request or exchange information. A good example of this is a cloud service 
                from apple where you can store pictures and various other forms of data.

            Device-To-Gateway Communication:

                Much the same as device to cloud communication, device to gateway communication essentially uses an application in order to connect to a cloud service.
        
            Back-End-Data-Sharing:

                BEDS can be a combination of the both device to cloud/gateway communication, and allows user to exchange, as well as view or modify that data. A perfect 
                example of this would be document sharing on google docs, letting people view/and or edit it.

    Top 10 IoT Vulnerabilities from OWASP:

        NOTE:
            Injection is one of the primary concerns, apart of the top 10 OWASP vulnerabilities.

        The following list below are a lit of top 10 vulnerabilities found in IoT devices that make them more succeptiable to various attack methods.

        I1 Insecure Web Interface:

            The lack of account log outs after a certain number of login attemps and weak credentials make IoT devices easily succeptible to a variety of attacks, in this 
            case, brute forcing attacks.
        
        I2 Insuffecient Authentication/Authorization:

            Another most common vulnerability found in IoT devices are weak and poorly protected passwords. Essentially a lot of IoT devices lack some form of MFA to preserve 
            the integrity of authentication.
    
        I3 Insecure Netowrk Services:

            Classic and most widely known vulnerability are IoT devices succeptiable to DOS/DDOS and buffer overflow attacks due to a lack of DOS/DDOS protection.

        I4 Lack of Transport Encryption/Integrity Verification:

            The lack of data encryption and integrity, the consistency/accuracy of data allows data to easily be viewable by outside parties, making man in the middle attacks easy 
            to perform.

        I5 Privacy Concerns:

            Lack of protection of personal data being collected is another issue. A good example of this is non-sanitized user input and validation, which can lead to XSS and SQL injection 
            attacks, even LDAP attacks if it goes that far.

        I6 Insecure Cloud Interface:
            
            The lack of complex passwords and easy enumeration of systems makes cloud interface vulnerabilities most prevalent.

        I7 Insecure Mobile Interface:

            Cloud interface vulnerabilities that are most prevalent, weak passwords that can be easily guessed, as well as enumerated are also prevalent in mobile devices.

        I8 Insufficient Security Configurability:

            Most prevalent when users aren't given enough options to modify their security. Facebook gives users the ability to login in with simple username and password, as well 
            as MFA to upgrade security should they need it.
        
        I9 Insecure Software/Firmware:

            Systems not being able to updage makes them more vulnerable. It's the reason why certain cellular devices, even windows will constantly remind you of updates, some, like android 
            devices, will force an update, should you ignore the notification to update.

        I10 Poor Physical Security:
            
            Prevalent when an attackers can simply dissasemble and grab the storage contents of devices. 

    Top 10 Mobile Vulnerabilities from OWASP:

        The following list below are a lit of top 10 vulnerabilities found in Mobile devices that make them more succeptiable to various attack methods.

        M1 - Improper Platform Usage:

            Improper platform usage reffers to the lack of platform security seen in applications and/or such as the enabling of permissions to the OS of a mobile device.
            Such lack of platform security puts mobile devices at high risk, which could possible lead to the theft of sensitive data from mobile devices.

        M2 - Insecure Data Storage:

            Insecure data storage reffers to poorly protected filesystems and other forms of data on mobile devices, which can lead to poor physical security, a vulnerability 
            often seen in IoT devices.

        M3 - Insecure Communication:

            Insecure communication reffers to insuffecient ability or failed attempts at ensuring a secure data communication, which lead to the viewing or theft of sensitive data.
        
        M4 - Insecure Authentication:

            Insecure authentication reffers to lack of proper authentication, as well as the consistency and integrity of authenticating the user. User authentication must happen at ALL 
            required times where it is needed, for it could lead to simple session hijacking attacks that will compromise user accounts.

        M5 - Insufficient Cryptography:

            Insufficient cryptography reffers to insuffiecient levels of cryptography where it is needed, which can lead to cases like: Insecure data storage and insecure communication.
            
        M6 - Insecure Authorization:

            The big key difference between authentication and authorization is that authentication identifies the end user, where as authorization identifies access to resources.
            Much like how insecure authentication makes devices more succeptiable to session hijacking attacks, insecure authorization, for example, from the M1 improper platform usage, if 
            insecure authorization is present, would allow attackers to bypass security measures and access insecure resources on mobile devices: storage, memory, etc etc. 

        M7 - Client Code Quality:

            Client code quality reffers to areas of code level implementation problems found in mobile devices that make them succeptiable to various code level based attacks, such as buffer overflow 
            attacks for example.

        M8 - Code Tampering:

           Code tampering reffers to the ability to perform hooking and API tampering methods on mobile devices, taking advantage of the fact that code for various mobile devices, once delivered, reside there.

        M9 - Reverse Engineering:

            The ability to utilize reverse engineering tools that allow the attacker to externally black-box different applications on mobile devices allows them to discover the innerworkings, as well as possible 
            source code for them.

        M10 - Extraneous Functionality:

            Extraneous functionality reffers to the accidentala inclusion of features in mobile devices and application: unintended backdoors, code with passwords commented in them by accident, these small things, 
            that if leaked, could pose a massive security threat to all system software versions of mobile devices.

**/