/** DNS Security Methods:

    Bellow are the following methods for effectively mitigating DNS security threats

            The following methods can be deployed to beter mitigate against security threats targeting DNS systems.

            Audit DNS zones:

                Inspect all domain and sub domain zones and make sure various softwares are up to date. Think of it like being your own personal
                auditor, making sure all TOE's under inspection are up to date.

            Updates:

                Making sure your DNS servers are up to date will better preserve DNS security.

            Hiding bind versions:

                Hiding your bind versions, the versions of your DNS software, will prevent attackers from auditing this information from your DNS servers.

            Restrict Zone Transfers:

                Restricting which DNS servers are allowed to make zone transfers will help prevent attackers from using certain DNS servers to probe for more 
                information about the topology of your system/network.

            Disable DNS Recursion:

                Disabling DNS recursion will help prevent queries to other domains outside of the DNS servers main records. This helps prevent DNS poisoning attacks 
                that would allow attackers to redirect users to fradulent domains. 

            Isolate Domains:

                Isolating domains is good implementation of security, in that it can help prevent web based attacks by isolating all servers associated with the web 
                application.

            DDOS Mitigation:

                Enable some sort of DDOS protection.

            Two Factor Authentication:

                Running two factor authentication or some form of MFA will help protect DNS servers

            Use Split-Horizon Operations:

                Split horizon operations would prevent routing loops that will render your DNS servers/and your network unusable.
            
            DNS Subnetting:

                As well as isolating DNS servers to better mitigate against web based attacks, subnetting DNS servers also helps prevent web based attacks. Essentially, 
                what an attackers can't easily locate, they can't easily compromise.
        
        General Innformation:

            Zone Transfer tools:

            The following tools are able to do zone transfers

            * NSLookup
            * DIG
            * Unix Command "Host"
            * Sam Spade

**/