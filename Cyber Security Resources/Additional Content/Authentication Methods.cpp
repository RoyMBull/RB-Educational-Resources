/** Authentication

    Authentication:

        When you're prepared to begin attacking systems, you'll often run into situations where you'll need to deal with 
        various Authentication methods in order to breach a system.

        Multi-Factor-Authentication:

            Multi factor authentication are added layers of security to authenticate a user. For example, lets say you're logging into
            your bank account via app. After entering in your username, you are then asked to use your fingerprint scan, followed by a 
            token that will be sent to your phone to verify you when you login. It's very easy to bypass the first part through a variety of 
            tactic such as social engineering and hardware level attacks where you can simply boot kali linux on someone's computer and 
            navigate to their credentials and steal the hashes and decrypt them, but these other added layers of security prevent that from 
            happening and reduce the odds of your account being compromised by an attacker.

        Two-Factor-Authentication:

            Two factor authentication involves two layers of security to verify your account.
        
        Three-Factor-Authentication:

            Three factor authentication involves 3 layers of security to verify your account.

        Token Authentication:

            Token authentication is simply a pin of some sort being sent to your phone in order to verify yourself after
            entering your password.

        Single-Sign-On(SSO):

            SSO, single sign on, reffers to services that allow you to authenticate with the use of one set of credentials.   

            More granular access is not a benefit of SSO

            SSO systems are also known as centralized authorization

        Authentication Factors:

            Authentication factors are the implementation of MFA methods to properly authenticate users.

            Possession Factors:

                Possesion factors utilize two-factor authentication to authenticate users.

            Inherence Factors:

                Inherence factors utilize biometric authentication to authenticate users.

            Location Factors:

                Location factors, utilize in location based access control systems, check global coordinates in order to validate and authenticate 
                users. 

            Behavior Factors:

                Behavior passwords utilize pre-set behaviors, such as draw patterns and pictures, used on our smart phones in order to authenticate users.

            Knowledge Factors:

                Knowledge factors involves the providing of a password in order to authenticate a user.

                Knowledge authentication factors in general require you to input pieces of information from memory in accordance to any other layers of MFA.

        Authentication Methods/Security:

            Federation Security:

                Federation security defines the handling and methods involved in authentication and authorization methods being used between client and server.

            Security Assertion Markup Language(SAML):

                SAML is used in the handling and transportation of authenticated data, often seen in special access policies 

            Shibboleth:

                Shibboleth is a form of SSO software

            OpenIDConnect:

                OpenIDConnect is used by mostly app developers to facilitate an easier form of authentication for users 
        
            Remote Authentication Dial-In User Service(RADIUS):

                RADIUS is used to provide secure remote communications, and is implemented on WPA wireless encryption

            TACACS+:

                TACACS encrypts all AAA data packets and provide more administrative control over the commands of remote access communications, and 
                can be available to you when also purchasing cisco networking equipment.

            Domain Name System Security Extensions(DNSSEC):

                DNSSEC's provide proper authentication for Zone transfers, which helps prevent DNS spoofing/Poisoning.
        
            Open Authorization(OAuth Verifier):

                OAuth, open authorization, is a new form of authintication being used today, which allows users to authenticate without exchanging password credentials 
                that can easily be sniffed out by an attacker

        Biometric Equipment Error Rates:

            Bellow are the following error rates that correlate to biometric equipment

            Cross Error Rates(CER)/Equal Error Rate(EER):

                CER/EER helps calibrate FAR and FRR in biometric systems, FAR determining how often a non authenticated user is granted access, FRR determining how often 
                authorized users are denied access

            False Rejection Rate(FRR):

                False rejection rates are the false positive of biometric errors, incorrectly rejecting authorized personel.

            False Acceptance Rate(FAR):

                False acceptance rates are basically the false negative of biometric errors, incorrectly granting authorization 
                to unauthorized personel.

            Biometric Sennsitivity:

                Biometric sensitivity is how long it takes for a biometric system to initiate a scan, checking for credentials. The level of sensitivity 
                will reflect how long a user has to, for example, leave their finger on a biometric scanner before it picks up the user and scans the.

            Zephyr Analysis chart:

                Zephry analysis charts can be used to help select different types of biometric systems for use


**/