#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook{
    public : 
        PhoneBook();
        ~PhoneBook();
        void ADD();
        void SEARCH();
        int all_digit(std::string str);
        int all_char(std::string str);
        void print_space(int len);
        void print_part_str(std::string str);
    private: 
        Contact  contact[8];
        int index;
        int count;

};

#endif