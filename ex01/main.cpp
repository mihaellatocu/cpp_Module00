#include "PhoneBook.hpp"
#include <cstring>
#include <cctype>
#include <limits> // Pentru std::numeric_limits

//cmd k cmd F for format// to install copilot

std::string str_toupper(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
    return str;
}

std::string trim(std::string &str)
{
    size_t start = 0;
    size_t end = str.length() - 1;

    while(start < str.length() && (str[start] == ' ' || str[start] == '\t'))
        ++start;
    if (start == str.length())
        return "";
    while (end > start && (str[end] == ' ' || str[end] == '\t'))
        end--;
    return (str.substr(start, end - start + 1));
}

void read_field(std::string prompt, std::string &field)
{
    std::string input;
    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        field = trim(input);
        if (!field.empty())
            break ;
        std::cout << "Field cannot be empty. Please enter a valid value.\n";
    }
}

void add_user(std::string &first_name, std::string &last_name, std::string &nickname, std::string &phone_nr, std::string &darkest_secret)
{
    read_field("First name: ", first_name);
    read_field("Last name: ", last_name);
    read_field("Nickname: ", nickname);
    read_field("Phone nr: ", phone_nr);
    read_field("Darkest secret: ", darkest_secret);
}

int main()
{
    PhoneBook p_book;
    std::string comand;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_nr;
    std::string darkest_secret;
    int index;

    do
    {
        std::cout << B "Enter a comand: " << G "ADD SEARCH or EXIT" RST << "\n";
        std::cin >> comand;
        comand = str_toupper(comand);
        std::cin.ignore(); //ignore the newline from buffer after comand
        if (comand == "ADD")
        {
            add_user(first_name, last_name, nickname, phone_nr, darkest_secret);
            Contact contact1(first_name , last_name , nickname, phone_nr , darkest_secret);
            p_book.addContact(contact1);
        }
        else if (comand == "SEARCH")
        {
            p_book.printContacts();
            bool validInput = false;
            do {
                std::cout << C "Add index between 1 and 8: " RST;
                std::cin >> index;
                if (std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << RED "The value entered is not valid\n" RST;
                    validInput = true;
                    continue ;
                }
                else if (index < 1 || index > 8)
                    std::cout << RED "Invalid index. Please add a nr between 1 and 8\n" RST;
                else if (index > p_book.getIndex())
                {
                    std::cout << M "No contact available\n" RST;
                    validInput = true;
                }
                else
                {
                    p_book.printContacts(index);
                    validInput = true;
                }
            } while (!validInput);
            continue ;
        }
    } while (comand != "EXIT");


    return (0);
}