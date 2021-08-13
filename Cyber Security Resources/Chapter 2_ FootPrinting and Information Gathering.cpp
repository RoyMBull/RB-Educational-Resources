/** Refresher NotePad:

    what are FootPrinting tools?:

        Once you move onto the second phase of your pen-test, the recon phase, you'll need a variety of 
        footprinting tools that will aid you, either passively or actively, in gathering information about
        your target. You can also deploy footprinting tools for foresnsic purposes as well.
    
    Types:

        The following footprinting tools to familierize yourself with are: netcraft, yesware, whois, nslookup,
        netstat, and metagoofil, dig, and traceroute.
    
    NetCraft:

        Netcraft is a footprinting tool, mostly used by web developers, to gather information about websites visited in 
        order to assess whether the site is safe to visit, giving the end-user the option to either ignore and accept the 
        risks or avoid them. Netcraft can also Online OS Fingerprint different systems.

    YesWare:

        Use the yesware footprinting tool to track the emails being sent.

    Whois:

        Whois queries a set of databases in order to secure the following information possible from a 
        target: DNS, IP address, address blocks, and autonamous systems, all of which is publicly provided.
        Whois also contains information about namdes, addresses of employees, and any technical points of contact.

    NsLookUp:

        Nslookip is a reverse DNS look up tool, where you can take, for example, an IP address, and trace it to it's original
        source, it's orignially DNS.

        The following command lets you do zone transfers via NsLookUp:
            ls -d accorp.local

        * In order to initiate multiple queries, use interactive mode
        * Nslookup can also perform zone transfers
        
        Nslook up and dig can help diagnose problems associated with DNS as well as monitor them.

    NetStat:

        Netstat shows all currently ongoing TCP/IP conections on a network, sort of like how 
        wireshark in a nutshell. 

    MetaGoofil:

        MetaGoofil is a very impressive footprinting tool in that it can extract metadata from a variety 
        of different sources: videos, images, pdf's, etc etc.

    Traceroute:

        Traceroute footprints for live hosts on a network, as well as securing the pathway the packets take during 
        the process, if host is found. 

        Tracert tends to fail sometimes because many routers block ICMP data packert

    Dig:

        Dig basically queries DNS's fonud. Dig is also known as "Domain Information Gatherer"

        Nslook up and dig can help diagnose problems associated with DNS as well as monitor them.
    
    CNAME:

        CNAME is a DNS footprinting tool that maps respective members, such as services that belong to the google domain name, 
        back to it's original source, which would be google. Essentially, use this tool to map where a web application, 
        or service originated from.
        
    net use (a commmandn):

        The "net use" command is used in order to connect to available remote resources, a drive, that stays mapped for systems to access
        even after reboot.

        Commands:

            net use \targetip$ "" /u:"" 
                connects via null session

            For /f "tokens=1 %%a in (hackfile.txt) do net use * \\10.1.2.3\c$ /user:"Administrator" %%a  
                Attempts to crack passwords for administrator

    OSRF Tools:

        OSRF tools are apart of the OSRFramework, a collective of intel gathering tools that we 
        can also use to aid us in our recon phase of an attack. These tools are mostly written in python

        Usufy.py:

            Queries usernames accross a variety of different platforms.

        Malify.py:

            Queries email handles accross a variety of different platforms.

        Searchfy.py:
            
            Queries a variety of different platforms from the OSRFramework itself.

        Domainfy.py:

            Queries Domain names accross different platforms. 

        Phonefy.py:

            Queries phone numbers accross different platforms.

        Entify.py:

            Entify uses regular expressions to extract entities.

        Osrfconsole.py:

            Initiates the main console of the OSRFramework.

    Google Commands:    

        Bellow are the following google commands that can be used by attackers as well as normal uses to obtain infromation about 
        sensitive data

        Commands:

            site: target.com filetype:xls username password email 
                this command enumerates sensitive information about end-users: username, password, email, etc etc.

    During the forensics of an investigation the following can be performed:

        * Calculating a hash of the original storage device
        * Creating bitstream copy clones of the original 
        * Removing the storage device from the suspects system



**/