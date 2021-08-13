/** Data Sanitation Methods

    Data Sanitation:

        Data sanitation involves the use of variour erasing/purging methods in order to prevent the theft of 
        data by phyiscal means, a classic vulnerability that puts information systems at risk.

    ILM: Information Lifecycle Management

        ILM reffers to the phases and stages through the conception of data's life cycle, form the moment it is reated, 
        maintained, until the moment it is destroyed. The ILM has a counter part called the data security lifecycle.
        Essentially this model is sort of like the waterfall model for the SDLC model, which allows for trasveral into previous 
        phases of the cycle.

        Stages:

            Create:

                During this phase, either new data is fabricated, or pre-existing data is modified.

            Store:

                After the data was created, next the data is stored to a respective storage medium of choice.

            Use:

                After said data has been stored properly, the data is ready for regulalar use by the end user.

            Share:

                Said data can and or may be exchanged, which can be modified, rinse and repeating the previous steps.

            Archive:

                Data leaves the active state and migrates to long term storage mediums for retention purposes.

            Destroy:

                Destruction of data is meant to render data unrecoverable through physical or digital means: physically destroying the 
                storage medium, or some form of cryptographic erasure.

    Data Hygine:

        Proper data hygine revolves around the proger maintaining of the location of data through out the life cycle phases, in an attempt 
        to manage where data is, as well as successfully  deleting redundnt/unused data that my present risk to the system 

    Phystical Destruction:

        Physical destruction involves various phyiscal means in order to destroy data: shreding HDD's, burning them, or the use of deguasers in
        order to render storage mediums completely useless

    Deguassing:

        Deguasing involves the use of electromagnetic fields in order to render the HDD tape useless. Deguassing however is inneffective on SSD mediums

    Cryptographic Erasure(Crypto Erase):

        Cryptographic erasure involves the use of data encryption, destroying the key making it unrecoverable, or just difficult to recover.
        This method is best used on non sensitive data

        Ensuring Cryptographic Erasure:

            Access to the API:

                Ensuring the device is powerd on, having access to the API is crucial in order to remove the crypto key for the erasure process

                Verifying the encryption key has removed the old key, replacing it with a new key

                Crypto erasuee software must produce a tamper proof certificae about the crypto graphic key, in order to verify it has been successfully 
                removed, along with data about the device and standard used

    Data Erasure

        Data erasure involves a series of methods of securley overwritting data on data storage mediums.

            Ways to achieve data erasure:

                * Allow for the selection of specific standards, based on industry and organization needs 
                * Verification of data being overwritten and removed accross all storage mediums
                * Produce tamper proof certificates containing information that the erasure has been successful, 
                  along with data about the respective devices.


    Block erase:

            Incorporating all the methods in order to achive successful data erasul, block erasure involves using various software to target the logical block addresses, including non 
            mapped to active addresses in order to perform data erasure.

    Incomplete data sanization methods:

        Incomplete data sanitization methods are the polar opposite of the the concept of data sanitation, where it involves in a various of methods that still render data recovery plausible 
        for an attacker

        Data deletion:

            Data deletion involves hiding data on storage devices, it being ready for overwritten. However this would mean that the data is available for theft.

        Reformatting:

            Reformatting, or the formatting process, which is a process of removing all data from the storage medium, is still not a successful data sanitation method in that data is still recoverable 
            via forensics tools.

        Factory Reset

            Factory reset is another form of reformatting, most prevalent on IoT devices such as mobile phones for example. There are cases where cryptographic erasure is at play, but none the less, 
            still leaves some data that can be recovered via forensics tools.

        Data Wiping:

            Data wiping is essentially a non verifiable form of data erasure, which leaves some uncertancies when trying to properly perform data santization.

        File Shredding:

            File shredding is the same concept of data wiping, with it's same faults, however targets individual files and folders on file systems.

        Data Clearing:

            Data clearing methods stem from the NIST, and protect against keyboard injection based attacks, as well as sanitizing data on all user addressable 
            storage meediums, using logical techniques in order to combat simple non-invasive data recovery techniques.

        Data Purging:

            Data Purging, defined by NIST, focuses on combating laboratory based attacks, utilizing a variety of physical and/or logical tehniques in order to render data 
            infeasible.

        Data Destruction:

            Data destruction involves destroying data from digital storage, and corrlates and is interchangeble with data sanitation, however, doesn't neccessarly verify any remianing 
            residual data that can be perpetrated via forensics tools and other methods.

        








**/