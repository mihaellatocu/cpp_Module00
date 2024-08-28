#include "PhoneBook.hpp"
// #include <iostream>
// #include <cstring>
// #include "Contact.hpp"

   PhoneBook::PhoneBook()
   {
      this->index = 0;
   }

   void PhoneBook::addContact(Contact new_contact)
   {
      std::cout << this->index << "\n";
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
            //std::cout << " this->contacts[i] " <<  this->contacts[i] << "\n";

         }
         contacts[7] = new_contact;
      }
      std::cout <<"Dupa ce am facut rocada " << this->index << "\n";
   }

   void PhoneBook::printContacts()
   {
      for (int i = 0; i < this->index; i++)
         std::cout<< i + 1 << " | "<< contacts[i].getContact();
   }


   void PhoneBook::printContacts(int index)
   {
      std::cout<< index << " | "<< contacts[index - 1].getContact();
   }

   PhoneBook::~PhoneBook()
   {
      std::cout << "Destructor called\n";
   }
