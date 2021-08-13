/** Web Network Hacking

    NetWork Security Methods: Wireless Security

        Disabling SSID broadcasting:

            Pro: Makes it so that unauthorized users won't be able to find the Network
            Con: Can still be sniffed out due to the fact SSID's are transmitted via packet data 

        MAC filtering:
            Pro: Makes it so that only set users with authorized MAC addresses may enter the network 
            Con: MAC addresses can be spoofed
        
    Defending Against wireless attacks:

        WPA:
        
            MIC:
                Provided integrety checking  in WPA, verifying frames are authentic and 
                have not been tampered with. Part of how it accomlishes this is a sequence number.
                If any frames arrive out of sequence, the whole session is dropped.

            WPA ustilizes Temporal Keys to provide more secure encryption than WEP 

        WPA2:

            CCMP(Counter Mode with Cipher Block Chaining Message Authentication Code):
                uses MIC(Message Integrity Codes) for integrity purposes and is is reliable 
                in providing integrity to WPA2 to provide consistency in the exchanging of information.

            * WPA2 uses AES for wireless data encryption at 128 bit and CCMP encryption levels
            * WPA2-ENT uses RADIUS authentication for remote network connections between client and serves

    TIPs:
        
        When using the 802.11 a/b/g/n standard to detect wireless LAN's, kismet is the 
        most optimal tool to use when performing this method

        If a wireless client is able to see a network, but is unable to connect, this is a sign that
        this may be a sign of some sort of filtering to restrict who can access the network 
        even if they know the password to authenticate themselves on it.

    Temporal Keys: 

        TKIP (Temporal Key Integrity Protocol) is an encryption protocol included as part of the IEEE 
        802.11i standard for wireless LANs (WLANs). It was designed to provide more secure encryption 
        than the notoriously weak Wired Equivalent Privacy (WEP), the original WLAN security protocol.
    
    RC4:

        Encryption method utilized by WEP, which is the reason why WEP is easily hacked and less secure.
        RC4 encryption is a symetric encryption cipher. It is NOT a block cipher. RC4 can also be used for file 
        encryption.

    * On a linux system, the following OpenSSL tool, can be used to connect to a 
          web server and test TLS

            openssl s_client -connect www.website.com:433(433 is the port number)


**/