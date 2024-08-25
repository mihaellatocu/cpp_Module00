#include <iostream>
#include <string>

class Contact
{
    private:
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string darkest_secret;

public:
    void    set_contact(std::string new_first_name, std::string new_last_name,  
        std::string new_phone_number, std::string new_darkest_secret);

    std::string get_contact(int index);
};
