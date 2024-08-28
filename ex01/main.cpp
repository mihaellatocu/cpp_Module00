#include "PhoneBook.hpp"
#include <cstring>

//cmd k cmd F for format// to install copilot
// daca prompt are altceva ce tr sa apara?
// daca nu am apucat sa adauag ce trebuie sa afisez?
//Contact constructor trebuie destruct?


int main()
{
    PhoneBook p_book;
   // Contact contact1;
    std::string comand;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_nr;
    std::string darkest_secret;
    int index;

    do
    {
        std::cout << "Enter a comand: ";
        std::cout << "ADD" << " " << "SEARCH" << " " << "EXIT" << "\n";
        std::cin >>comand;
        //comand.resize(10);
        //comand.shrink_to_fit();
        if (comand == "ADD")
        {
            std::cin>> first_name >> last_name >> nickname >>phone_nr >> darkest_secret;
            Contact contact1(first_name , last_name , nickname, phone_nr , darkest_secret);
            p_book.addContact(contact1);
        }
        else if (comand == "SEARCH")
    {
        std::cout << "Add index between 1 and 8: ";
        std::cin >> index;
        p_book.printContacts(index);
    }
        std::cout << std::endl;
        p_book.printContacts();
    } while (comand != "EXIT"); //(comand == "ADD" || comand == "SEARCH");
    
    std::cout << std::endl;
   
    p_book.printContacts();


    return (0);
}