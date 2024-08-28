#include <iostream>
#include "Contact.hpp"

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

    ~PhoneBook();
   
};
