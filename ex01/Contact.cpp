#include "Contact.hpp"
#include <iomanip>

std::string formatCell(std::string element, size_t width)
{
    if (element.length() > width)
    {
        return element.substr(0, width - 1) + ".";
    }
    else
    {
        return (std::string(width - element.length(), ' ') + element);
    }
}

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
{
}

std::string Contact::getContact()
{
    return formatCell(first_name, 10) + " | " + formatCell(last_name, 10) + " | " + formatCell(nickname, 10) + "\n";
}

std::string Contact::getUser()
{
    return first_name;
}

std::string Contact::getContactDetails()
{
    std::string user = "";

    user = "First name: " + first_name + "\n" + "Last name:  " + last_name + "\n" +
           "Nickname:   " + nickname + "\n" + "Phone nr:   " + phone_number + "\n" + "Darkest secret: " + darkest_secret + "\n";
    return user;
}