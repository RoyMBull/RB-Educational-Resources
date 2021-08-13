/** DNS Record Types
    
    Domains Vs Zones:

    Domains are comprised of a series of zones that have corresponding DNS servers responsible for handling them

    Domain:

        Domains represent the various assessts associated with the organization domain name: servers, machines, points of contact,
        etc etc

    Zone:

        Zones are sub domains belonging to the DNS servers that govern them, and contain 1 SOA record per zone which contain authoritive records 
        associated with the DNS server

    A: Host Addres Record

        The A DNS record, also known as the Host address record, is where DNS domains are converted into friendly IP
        addresses that are machine friendly.

    AAAA: IP host addresses 

        The AAAA DNS record contains information that specify the IPV6 address for host systems
    
    ALIAS Records: Auto Resolved Alias

        The ALIAS DNS record, much similar to CNAME, which is used to trace back DNS members to their respective memebers, is much the same, 
        except it allows the record to coexist with other records of that same name

    MX: Mail Exchange Records

        MX records contain various record points that reference the name of email servers associated/responsible for the domain name

        In the case scenarios there are Multiple email servers, for back up and redudany purposes, Separate MX records are made for them, each
        having a reference number associated with them.

    NS: Authoritive Name Server

        NS records identify the DNS server in charge of a Zone

    PTR-Records: Domain Name Pointer

        PTR records are used for reverse record look ups, or reverse IP mapping, which is seen prevalent in 
        NsLookup, a reverse DNS look up footprinting tool that queries the DNS server via a given IP address in order 
        to map it to it's respective host. They reverse A and AAAA records.

    SRV Records: Location of service record 

        SRV records server to specify the location of a service within a domain name, can be used for load balancing, as well as specify 
        the port number of services. 
        
        SRV records are comprised of 3 parts: service, domain, and protocol.

        Service location is specified through the following:

            Priority: Preference number that is used when more servers are providing the same service 

            Weight: For advanced load balancing

            Port: TCP/UDP port on the server that provides the service

            Target: The domain name of the server

    TXT Records: Descriptive Text record:

        TXT records contain information about end users hosting the domain name and various points of contact.

    CNAME:

        CNAME is a DNS footprinting tool that maps respective members, such as services that belong to the google domain name, 
        back to it's original source, which would be google. Essentially, use this tool to map where a web application, 
        or service originated from.

**/