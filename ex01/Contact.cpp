#include "Contact.hpp"


// void    Contact::set_contact(std::string new_first_name, std::string new_last_name, std::string new_nickname,
//         std::string new_phone_number, std::string new_darkest_secret)
// {
//     this->first_name = new_first_name;
//     this->last_name = new_last_name;
//     this->nickname = new_nickname;
//     this->phone_number = new_phone_number;
//     this->darkest_secret = new_darkest_secret;
// }
    Contact::Contact() : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("") {}

    Contact::Contact(std::string &new_first_name, std::string &new_last_name,
       std::string &new_nickname, std::string &new_phone_nr, std::string &new_darkest_secret) : first_name(new_first_name),
        last_name(new_last_name), nickname(new_nickname), phone_number(new_phone_nr), darkest_secret(new_darkest_secret) 
        { }

std::string Contact::getContact()
{
    return first_name + " | " + last_name + " | " + nickname + "\n";
}