#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    this->index = 0;
}

void PhoneBook::addContact(Contact new_contact)
{
    if (this->index <= 7)
    {
        contacts[this->index] = new_contact;
        this->index++;
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {
            contacts[i] = contacts[i + 1];
        }
        contacts[7] = new_contact;
    }
}

void PhoneBook::printContacts()
{
    for (int i = 0; i < this->index; i++)
        std::cout << std::setw(10) << " " << i + 1 << " | " << contacts[i].getContact();
}

void PhoneBook::printContacts(int index)
{
    std::cout << contacts[index - 1].getContactDetails();
}

int PhoneBook::getIndex()
{
    return this->index;
}

// PhoneBook::~PhoneBook() // The destructor is automatically called, no need to add this function
// {
//    std::cout << "Destructor called\n";
// }
