#include "Contact.hpp"


void    Contact::set_contact(std::string new_first_name, std::string new_last_name,  
        std::string new_phone_number, std::string new_darkest_secret)
{
    first_name = new_first_name;
    last_name = new_last_name;
    phone_number = new_phone_number;
    darkest_secret = new_darkest_secret;
}

std::string Contact::get_contact(int index)
{
    std::string user = "";
    user += first_name;
    user += " | ";
    user += last_name;
 
    return user;
}