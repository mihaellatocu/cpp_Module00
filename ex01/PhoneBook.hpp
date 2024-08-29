#include <iostream>
#include "Contact.hpp"
#include <cstring>

# define RST	"\033[0m"  		/* Reset to default color */
# define RED	"\033[1;31m" 	/* Red */
# define G		"\033[1;32m" 	/* Green */
# define Y 		"\033[1;33m" 	/* Yellow */
# define B		"\033[1;34m" 	/* Blue */
# define M		"\033[1;35m" 	/* Magenta */
# define C		"\033[1;36m" 	/* Cyan */
# define W		"\033[1;37m" 	/* White */

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;

public:
    PhoneBook();

    void addContact(Contact new_contact);

    void printContacts();

    void printContacts(int index);

    int getIndex();

    // ~PhoneBook();
};
