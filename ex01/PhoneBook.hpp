#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook{
    private: 
        Contact  contact[8];
        int index;
    public : 
        PhoneBook();
        ~PhoneBook();
        void ADD();
        void SEARCH();
        int all_digit(std::string str);
        int all_char(std::string str);
};

#endif