#include <iostream>
#include <cstring>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();

    Contact(std::string &new_first_name, std::string &new_last_name,
            std::string &new_nickname, std::string &new_phone_nr, std::string &new_darkest_secret);

    // void    set_contact(std::string new_first_name, std::string new_last_name, std::string new_nickname,
    //     std::string new_phone_number, std::string new_darkest_secret);

    std::string getContact();

    std::string getUser();

    std::string getContactDetails();
};
