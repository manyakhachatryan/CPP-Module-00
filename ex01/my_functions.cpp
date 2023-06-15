#include "PhoneBook.hpp"


int PhoneBook::all_digit(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
       if (!(isdigit(str[i])))
       {
            std::cout<<"please input valid number"<<std::endl;
            return 1;
       }
    }
    return 0;
}

int PhoneBook::all_char(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!(isalpha(str[i])))
       {
            std::cout<<"Input is not correct , please try again "<<std::endl;
            return 1;
       }
    }
    return 0;
}