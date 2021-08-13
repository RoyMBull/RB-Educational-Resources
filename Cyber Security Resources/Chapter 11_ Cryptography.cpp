/** Refresher Pad:

    Now that we've covered the basics of the various Virus types, itme to cover Cryptography, the study 
    of the various forms of data encryption that help to maintain the integrity and safety of our data.

    Encryption Standards:

        Secured Shell(SSH):

            SSH is essentially a more encrypted version of a TCP client/server, allowing various parties to exchange data.
        
        Secured Socket Layer(SSL):

            SSL is a form of data encryption for network data channels. It utilzies RSA asymetric encryption as well as digital 
            certificates, requiring passwords for a more secure connection. 

        TLS:

            TLS is the succcessor to SSL. It also uses RSA data encryption.

        RC4:

            RC4 is a symetric encryption algorithm that is primarily used for wireless netowrk data encryption, specifically WEP.

        NTLM & Kereboros:
    
            NTLM, much like kereboros systems that server to provide secure network data communications 
            between client and server, utilize a 3 way handshake in order to authenticate. 

            The big downfall of NTLM, is like, WPA/WPA2, which uses a 4 way handshake for network data encryptio,
            it's succeptiable to passive online, which sniff out packet data containing credentils during the handshake.

            Kereboros is more secure than NTLM because it utilizes the KDC system, which provides a unuqie hash/key that 
            must be established and used EVERY new data communication session per user, which kinda serves like a empheral 
            key in a sense.

            Kereboros can authenticate to modern windows active directory domains

        Encryption Types:

            There are two categories of data encryption, asymetric and symetric data encryption, each having their own breeds.
        
            Symetric Encryption:

                Symetric encryption typically involves the use of one way data encryption, generally using one key, a private key for example, 
                to encrypt data, in which requires the same key in order to decrypt the data. Bellow are all the forms of symetric data encryption

                Symetric encryption is fast, reliable, and is good for bulk encryption. The only isssue it has is scalibility problems.

                Hashing Algorithms:

                    Hashing algorithms are one-way form of data encrptions that doesn't require a key in order to decrypt it. Hashing algorithms, of all the 
                    encryption standards, both symetric and asymetric wise, the most reliable form of data encryption that maintains high accuracy and integrity.
                    When data is hashed, it's information is converted into a fixed value, that, if not matched when refferencing it, can be easily detected as 
                    counterfit using hashin integrity checking tools/algorithms. Hashing algorithms generate randomized hash values, giving each data their own unique
                    identifier

                    MD5:

                        MD5 takes a data of whatever length and converts it into a fixed hash value, that is then used to validate and authenticate the converted data.

                    SHA-1:

                        Resembling the MD5 hashing algorithm, SHA-1, part of the SHA hashing family, utilizes a series of different block sizes in order to encrypt data. 
                        SHA-1 uses 160 bit block sizes and produces a 160 bit output.
                        
                        The SHA-1 hashing algorithm produces a 40 character message digest.

                    SHA-2:

                        SHA-2, unlike SHA-1, utilzies various block sizes to encrypt data.

                    Block Ciphers:

                        Much like how SHA hashing algorithms utilizes various block sizes to encrypt data, block ciphers do the same, except they the convert and encrypt that 
                        data into cipher text using a predetermined key size. This prevents data from being encrypted the same way. Block Ciphers convert a fixed lenght amount 
                        of plain text into cipher text of the same length.

                        Data Encryption Standard(DES):

                            The DES encryption algorithm takes various forms of data and converts it into 64 bit block sizes, and then uses a predetermined 48-bit key to convert
                            the data into cipher text.

                        3DES:

                            3DES is essentially encryption of data using the DES algorithm 3 times, hence the name, tripple data encryption standard.

                        Electronic Code Book(ECB):

                            ECB is a weak form of DES encryption.
                        
                        Intenral Data Encryption Algorithm(IDEA):

                            IDEA is a symetric encryption algorithm that utilizes 128 bit sized private crypto keys for data encryption

                        GPG:

                            GPG, GNU privacy guard, is the potential successor of PGP, used in email data communications. GPG uses an open source public key for data 
                            communications.

                        BlowFish:

                            Blowfish is a symetric data encryption algorithm designed to replace DES and IDEA.


                        Advanced Encryption Standard(AES):

                            AES encryption algorithm uses a series of singular keys known as private keys, which can be used to both encrypt and decrypt data. It's much faster than RSA 
                            data encryption, however it's more succepitabnle to data comprommise, as well as having poor scalibility, requiring a lot of keys in masses. AES is succeptibale 
                            to being compromised, in that should private key be discovered by an attacker, it would mean they'd be able to access and decrypt all data associated with the key.
                    
                    Stream Ciphers:

                        Stream ciphers encrypt data one bit at a time via the use of random sized keys. It's very slow and not optimal in terms of encryption standards, and isn't advised to use 
                        by the NSA.

                    
            Asymetric Encryption:

                Asymetric data encryption typically involves the use of two keys, one for encryption, a public key, and the other, the private key, for decryption.
                Asymetric encryption provides better scalablity and security than symetric encryption, the cavet being it's slower than symetric encryption.

                RSA:

                    RSA is the latest standard in data encryption, and uses the following encryption methods as previously described abnout.

                PGP(AKA Pretty Good Encryption):

                    Asymetric encryption standard for email.

                Diffel-Hellman:

                    Diffel-Hellman provides secure transportation of crypto keys for asymetric data encryptions.
    
                ECC:

                    ECC, elliptic curve cryptography, is a form of asymetric cryptography for mobile devices that lack memory and computing power.

                ElGamal:

                    ElGamal is a form of asymetric data encryption.

    Encryption Exchange Methods:

        Below are different forms of encryption exchange methods that provide keys whether they be public or private ones for data encryption.

        Key Exchange Portal:

            KEP's provide end-users with a means of access to public and private keys to safely sensitive data.
            
        Key Revocation Portal:

            Serves as a means to change keys, disabling the previous one. Think of it like changing the locks to your house. 

        Key Distribution Center(KDC):

            KDC's are in a sense the pure defniniton of what a PKI is, a crypto key exchange system issuing and management system that assigns crypto keys to users in order
            to allow secure exchanging of data. Unlike most PKI systems, which generate keys to user that can be used for as many communincations as they want until they choose
            to revoke the key or it's replaced, or voided, etc, KDC's, which are used on much smaller networks, KDC's require users to put in a TGT ticket that will grant a unique 
            password for both users per communication session. Think of this like teamviewer, which is used for remote communication sessions, providing a unique key for both users 
            per session.

            Phases of a KDC system:

                * User provides login credentials to authenticate
                * Kereberos, which is used by KDC and prevents SMB password attacks, encrypts the credentials and ships it to the KDC system
                * The KDC system verifies the credentials, if valid, will generate a TGT containing a unique hash that is the password for the 
                  end-user requesting the session, that comes with a TTL time stamp on how long they have to use that hash before having to get 
                  another one.
                * The hash is then sent to the user, in which they can use in order to establish secure data communications to exchange data. 
                * The benefit of this system is that it is sort of emperial, in that the key is sort of a TTL use, that will help prevent wrapping/
                  replay attacks due to the fact the key is always subject to change.

        Cross-Certification:

            Allows two Separate PKI systems to communicate with one another. A PKI is a public key infrastructure that handles the management of the distribution
            and revokin of public and private keys. Essentially a combination of KEP and KRP. It also contains two forms of authority types: Registration and certificate 
            authorit.
                
                Registration Authority:

                    RA verifies end-users in a PKI system.

                Certificate Authority:
                
                    CA stores, issues, and signs digital certificates.

                Authentication Authority:

                    AA, authentication authority, handles the login credentials of users when logging in and engaging with PKI systems

                Subordinate CA:

                    Subordinatea are essentially non-certified CA's, that handle the signing of digital certificates correspongin to crypto key 
                    data.

                Root CA:

                    Root CA's own one or more roots that operate for CA's
                   
    Encryption Based Attacks:

        Now that we've covered the basic of encryption standards and methods, time to cover on launching attacks against them.

        Paddling Oracle and Downgraded Encryption Attack(POODLE Attack):

            POODLE attacks are main in the middle attacks that easvdrop and intercept internet data channel communicaitons via SSL. POODLE attacks are no longer prevalent in TSL, the successor to
            SSL. POODLE attacks also take advantage of TLS fallback mechanisms should they be used. BE MINDFUL, DOWN AND FREAK ATTACKS ARE NOT MAN IN THE MIDDLE BASED, ALTHOUGH THEY CAN DO WHAT 
            PODDLE ATTACKS CANNOT.
        
        DOWN Attack:

            DOWN cryptographic attacks are an upgraded version of POODLE attacks that can now affect TLS systems, taking advantage of SSL backwards compatiblity TLS has in order to affect TLS systems.

        HeartBleed Attack:

            Heartbleed attacks take advantage of a major flaw in SSL encrpytion. SSL encryption constantly sends data packets to validate communication channels, heart beats essentially these forms of attacks 
            take advantage of.

        Factoring Attack On RSA-Export Keys (FREAK) Attack:

            Prevalent in RSA export systems, FREAK attacks is essentially the third upgraded version of POODLE attacks, in that it can now target TSL and SSL system. It also uses main in the middle attacks to 
            slow down connections between client and server.
        
        Vector Attack:

            Vector attacks are a form of cryptoanalysis based attacks.

            Cipher-text Attack:

                The goal of cipher text attacks is to uncover as much plain text from encrypted data as possible in order to guess the private key. Cipher text attacks are used under the assumptions that the attacker 
                has one or more pieces of data that are encrypted.

            Known-Plain-Text Attack:

                The goal of a KPTA attack is to develope counter measures that will crack a current cipher at play being used to encrypt data, so that the attacker will have the means to decrypt any data it encrypts. This 
                method is used under the assumption the attacker has both the encrypted and decrypted of data.

            Choosen Cipher-Text:

                Chosen cipher text attacks involve taking multiple keys, feeding multiple plain-texts in order to find a matching key.
                
                Ignore the definition below for now:
                The goal of chosen cipher attacks is much the same like cipher text attacks, trying to guess the private key at play, except, in this scenario, the attacker has one or more encrypted pieces of data with their 
                corresponding plain texts, the goal being to guess the private key through these means.

            Replay-Attack:

                Replay attacks are cases where the attacker has successfully intercepted a message that has come with a set of public and private keys attatched to it. The attacker can then use these keys to forward fradulent messages 
                as if they were the sender. Good counter measure to this is randomly generated keys rather than the same one being used throughout the lifespan of the communication channel.

NEW INFORMATION: Study this information Thoroughly first.

    Key Management Types:

        Bellow are the following types of Crypto key management systems ditctate the management of crypto keys in key exchange systems.

        Decentralized Key Management System(DKM/DKMS):

            DKM, decentralized key management systems, essntially operate without a central authority. DKM's are able to provide high scalable key distribution, recoery, and verifiation by leveraging it's availability, resiliance, security, 
            and immunability properties.

        Centralized Key Management(CKM):

            CKM's, centralized key management systems, are geographical crypto key management systems that focus all resources: hardware, software, processes, etc etc, for crypto key management into one general area.
            For private coorporations,  Centralized Key management systems is more secure

        Distributed Key Management(DKM):

            Distributed key management systems are the opposite of CKM's, isolating/segmenting crypto key management systems.

    Key Exchange Methods:

        Bellow are the following key exchange methods which revolve around how keys are handled during an exchange.

        Ephermeral Key:

            Ephermeral Keys server as one time use keys during data communication sessions. This helps prevent wrapping/replay attacks which allow an attacker to perform man-in-the-middle attacks, intercepting and changing the contentes of sensitive data
            in messages, refabricating the contents as if they were the sender/reciever, leaving no trace of the attack. Very practical if you have crypto keys exchanged during secured communication sessions.  

    Crypto-Key Bit Sizes:

        DES = 64 bits
        AES = 256 bits
        3DES = 168 bits
        IDEA = 128 bits

    Steps to create a digital Signature:

        Bellow is the following process of how a digital signature is made during a data communciation between two parties.

        * A message is written and preped for sending by a sender
        * A hashing algorithm, computated by the sender encrypts the message and creates a hash value for the message
        * The sender then uses their private key (Or public key if) to encrypt the message
        * The hash value is attatched to the message
        * The messaged is shipped off to the reciver
        * The reciever views and strips off the digital signature which is the hash value
        * The reciever decrypts the message via their public key.
        * The reciever computes a hash of the message
        * The reciever then compares the hash values to make sure they match.

    Mode Of Operations

        Bellow are the following modes of operations used in block ciphers to help provide better privacy and data encryption.

        Ciphe Block Chaining(CBC):

            Cipher block chaining is the processs of converting cipher text and block encryption data, together, forming an intricate
            level of cipher text. Traditionally, how block cipher work, a variety of different block ciphers are used to encrypt data, 
            data that is then converted into cipher text. All blocks are made and alltogether, make up an intricate piece of cipher text.
            However during cipher block chaining, the following will occur: piece of data will be encrypted into block data, that block 
            data will be converted in cipher text, THEN, the cipher text that was just made, will be paired with the next block data that is 
            to be made, creating a new piece of cipher text. This process occurs until all data is properly encrypted and converted into cipher 
            text. 

        Galois Counter Mode(GCM):

            Hashing algorithms provoide the best form of integrity for data, which is the consistency and accuracy of data, which makes it also easier 
            to detect whether data has been changed or not due to hashing values that are assigned to encrpted data. What galois counter mode does is 
            provide better privacy encryption as well as integrity by issuing a series of counters, each assigned per block of data being encrypted, 
            uniquely made using XOR, which is a boolean logic operation that helps prevent collisions, unique anomalies that occur if two booleans are the same, 
            or in the case of block counters or hashing algorithms, would mean two outputs of their data are the same. 
        
        Counter Mode:

            Counter Mode is much the same, excetp the results are XOR'd into cipher text.

    Extensible Authentication Protocol(EAP) Methods:

        EAP's, extensible authentication protocols, provide methods of MFA that provide better authentication and secure data communications between client and server.

        EAP-FAST:   

            EAP-FAST provides a more secure form of network data communication through TLS/SSL

        EAP-SIM:

            EAP-SIM allows GSM cellular mobile devices the ability to authenticate to cellular netowrk providers through SIM cards.

        EAP-TLS:    

            EAP-TLS is a more improved version of EAP-FAST, focusing on TLS, the new standard of network data communication. It uses TLS public key certificates to enable 
            more secure communications between client and server

        Protected Extensible Authentication(PEAP):

            PEAP provides a method of means to safely transport authenticated data. 

    Certificate Based Tools:

        Bellow are the following certificate based tools that can be used when implementing new domains on web servers to add more security.

        Pinning:

           Pinning is used by sites that rely on SSL certificates, requiring users to accept various crypto identities upon visiting the site, which is useful in distinguishing fradulent ones from the others.

        Stapling

            Stappling staples all TLS/SSL data communication handshakes each time a user visits a site via OCSP, sort of like a snapshot.

    Digital Certificate Types:  

        Digita certificates contain information about crypto key data, and are usually isssued to users when requesting a crypto key for safe data encryption and communication. They 
        can also be requested by administrators to inquire information about the various keys issued to users. Essentially this is a identifier for crpto keys.

        Wildcard:   

            Wildcards are digital public key certificates allow multiple subdomains to easily be associated via the same digital certificate.

        Online Certificate Status Protocol(OCSP):

            OCSP servers to validate digital certificates. When an end-user wishes to verify and obtain informaiton about crypto keys under a digital certificate.  A request is put in by the client in which 
            a response will be given back verifying the integrity of the key belonging to the original end-user using the key.

    Forward Secrecy/Forward Security/Perfect Forward Security Methods:

        Forward secrecy methods reduce the amount of data that can be compromised should an attack occur. Isolation methods such as subnetting or out of band networks make great example of 
        this.

        Eliptic Curve Fiffie Hellman Ephemeral(ECDHE):

            ECDHE, eliptic curve fiffie hellman ephemeral, is a form of a crypto key exchanging mechanism that enables forward secrecy.

    General Information:

        Storage Area Network(SAN):

            SAN, storage area networks, are networks containing storage mediums that are designed to provide access to files and other resources to systems on networks. Netuse can take advantage of this, 
            allowing users to connect to these resources, mapping the hard drives, which are mapped for access even after the machine is rebooted.

            SAN networks allow users to do much what a wildcard can do, verifying multiple subdomains witha single certificate, EXCEPT, will not allow 
            other subdomains to be included. 

        Out-Of-Band Networks(OOB/OoB):

            Out-Of-Band networks isolate/segment network traffic into different pathways, which is useful for safely sending keys duing data exchanges, or isolating devices onto different lines of traffic 
            such as mobile devices for example, in order to prevent massive scale attacks, maintaining perfect forward secrecy.
            
            Out-Of-Band networks can also help prevent keys from being intercepted during data exchanges, sending the keys along a different path 
            from the message.

        Password-Based Key Derivation Function(PBKDF2):

            PBKDF2, used by 1Password systems which is a virtual vault storing a variety of different credentials, helps mitigate against encryption based attacks, which are brute force attacks that focus on utilizing 
            various resources, such as CPU and GPU speed for example to computate the most possible number of guesses in a certain amount of time to crack the password. PBKDF2 limits the amount of resource that can be used 
            to crack the password. Essentially if you could crack a password in about 15 min at a time, lets say, for example, a wild example, would take the amount of time to crack RSA encryption which would take YEARS if 
            you attempted to simply brute force a RSA crypto key. 

        HMAC:   

            HMAC's are computated digital signatues that authenticate end users and validates each user during data communications in order to determine legitamacy.        
        
        Nonrepudiation:

            Nonrepudation verifies the legitemacy of actions, and the integrity of them. A good example is feeding plain texts into a hash to check whether or not files were modified.

        Key Escrow:

             Key escrows server as a coat check for end-user crypto keys, lined matching to their original owners.

        Encryption Key Bit Sizes:

            Bellow are the following crypto key sizes used by various forms of data encryption algorithms.

            DES = 64 bits
            AES = 256 bit
            3DES = 168 bits
            IDEA = 128 bits

        When requesting digital certificates, the following is needed:

        * Proof of Identity
        * A Public Key
        
        Crypto keys and digital certificates should be renewed just before it expires

        Key Stretching:

            Key stretching converts passwords to more longer and complexing crypto keys, and are beneficial to minimizing information remmeberd by 
            users while maximizing the security of encryptions. This is done in systems where there is a concern for users being unable to remember 
            long passwords.

    Genral Cryptography Info:

        Encryption at rest:

            Encryption at rest is the use of FDE, full disk encryption, to properly encrypt and secure all data on HDD's for computing systems in order to 
            mitigate theft of data, potentially more so should an attacker steal the HDD. They'll have to crack the encryption in order to cipher all data.

        Secret-Key Cryptography:

            Secret-Key is the use of only a private key during symetric data encryptions.

        Key Secrecy Vs Algorithm Secrecy:

            Key secrecy is the use of quickly generated keys for data communications, which is highly succeptible should an attacker crack the encryption algorithm. 
            Algorithm secrecy is the generation of different algorithms, which will then generate a key. Slower, and a bit more time consuming to deploy, but more secure.

            In terms of the methology of secrecy of the key and secrecy of the algorithm, the principle itself, kreckhoff's principle, which 
            focuses on loss of data without compromising the system focuses on this.

        Kerckhoff's Principle:

            Kerckhoff's principle allows for the interception of an encrypted message without compromising the system.

        DSA:

            DSA, digital signature algorithm, generates data encryption algorithms for RSA asymetric data encryptions, essentially an implementation and preservation of algorithm 
            secrecy.

        SMB Tools:

            * L0phtcrack can crack SMB passwords by listening in on network traffic.
            * Kerberos is a solid tool to prevent L0phtcrack tools from sniffing SMB passwords
        
        MIME AND S/MIME:

            MIME is used by email attatchements when exchanging data. They are also known as digital signature attatchments. A more secured version of this is S/MIME.



**/