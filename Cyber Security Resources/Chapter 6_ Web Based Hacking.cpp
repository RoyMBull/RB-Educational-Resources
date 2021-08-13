/** Refresher Pad:

    What Comes Next?:

        Now that you understand the basics and methods used to attack a system, now it's time to cover the basics
        of attacking a web system.

    Web Based Attacks:

        Unicode Paramter Tampering Attacks:

            UPTA attacks involve the manipulation of parameters exchanged between client and server. For example, when the 
            user searches for something on a website using the search bar, a query is made to the server side database that will
            bring the requested information to the client, or validate should the user be logging into an account. Paramater tampering 
            allows an attacker to modify this and get other bits of information from the database that normally woulnd't be permissable. 
            This form of tampering can be easily prevented by simple validation and sanitation of user input. This form of attack in a nutshell
            is basically what SQL injection is.

        Directory Traverse Attacks:

            Direcrroy traversal attacks involve the use of HTTP based attacks to bypass prohibited directories on web servers in order to secure 
            sensitive information such as source code for example, or anything that would give you the drop on breaching a web serves database. 
            
        Cross-Site-Scripting(XSS)-Attacks:

            XSS attacks are another form of UPTA attacks, in that it allows you to run scripts in a web browser to do what SQL injection does.

            XSS attacks primarily focus on the cookies and browsing history of websites visited by users.

            Defensive coding, input validation, HTTPS flags, and escaping meta characters help mitigate XSS attacks

        Cross-Site-Forgery-Attacks:

            Cross site forgery attacks involve controlling the users machine to authenticate and validate them on any personal acccounts that will give you 
            access to their information. For example, you could use this technique on another users bank account to have them wire all funds in their account to 
            your account.
        
        Lightweight Directory Access Protocol Attacks:

            LDAP attacks are a bit of a step further in terms of amping up the scale of a SQL injection attack. These kind of attacks when paired with LDAP will allow 
            an attacker to not just access the sensitive data of one user, but many, possibly ALL users. It's these reasons it is required by law to sanitize user input and 
            validate it.

        Command Injection Attack:

            Command Injection Attacks insert unexpected lines of text into URL's.
    
    Defending Against Web-Based Attacks:

        A good defense is a good offence, such can be said when knowing your targets defence. The following can be done to defend against the following web based attacks: 
        XSS, Buffer overflow attacks, paramaeter tampering, and cross site forgery attacks.
    
        XSS & UPTA:

            Simple sanitation and validation of user input can help prevent SQL and XSS attacks.

        CSFA:

            Multi-Factor Authentication helps prevent cross site forgery attacks.

    SQL injection Attack Methods:

        Bellow are the following ways to execute a SQL injection attack.

        Blind SQL Injection: Also known as an inferential attack

            This method of SQL injection is used against web applications that are designed to display error messages but have not mitigated the code vulnerable to SQL injection 
            attacks. In a sense the attacker is probbing the web application for error messages through the use of true or false questions to it's respective database in order to 
            retrieve sensitive information. The difference between blind SQL injection attacks and the normal one is the methods used to retrieve data.

            Bline SQL Categories:

                Boolean:
                     
                    Boolean blind SQL injections involve the attacker querying SQL database servers in order to observe the behavior and results of the returned response.
                    whether it returns true or false

                Time-Based:

                    Time based blind SQL attacks query the database in order to observe the time frame of how long before the SQL database returns a response, essentially observing the 
                    response time in order to verify true or false questions.

        In-Band SQLi:

            In band SQL injection based atacks use the same data communication channel between client and server.

            In-Band SQL Categories:

                Error-Based SQLi:

                    Error based SQLi injection attacks focus on performing a seris of actions and or queries that provide error messages that can be analyzed by the attacker

            Union:

                Union based, one of the most common forms of SQL injection attacks used, extend the results returned from a query to the database. LDAP attacks are one of best examples to
                describe union based SQL injection attacks.

        Out-of-band attack

**/