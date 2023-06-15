#include "PhoneBook.hpp"

int PhoneBook::all_digit(std::string str)
{
    int size = str.length();
    for (int i = 0; i < size; i++)
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
    int size = str.length();
    for (int i = 0; i <size; i++)
    {
        if (!(isalpha(str[i])))
       {
            return 1;
       }
    }
    return 0;
}