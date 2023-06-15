#include "PhoneBook.hpp"
PhoneBook::PhoneBook()
{
   index = 0;
}
PhoneBook::~PhoneBook(){}

void PhoneBook::ADD()
{
    if(index==8)
    {
        index = 0;
    }
    std::string str;
    std::cout<<"Please input your first name"<<std::endl;
    label1 :
    std::getline(std::cin, str);
    if (all_char(str))
        goto label1;
    contact[index].set_first_name(str);

    std::cout<<"Please input your last name"<<std::endl;
    label2:
    std::getline(std::cin, str);
    if (all_char(str))
        goto label2;
    contact[index].set_last_name(str);

    std::cout<<"Please input your nickname"<<std::endl;
    std::getline(std::cin, str);
    contact[index].set_nickname(str);
 
    std::cout<<"Please input your phone number"<<std::endl;
    label3:
    std::getline(std::cin, str);
    if(all_digit(str))
       goto label3;
    contact[index].set_phone_number(str);

    std::cout<<"Please input your darkest_secret"<<std::endl;
    std::getline(std::cin, str);
    contact[index].set_darkest_secret(str);

    index++;
    std::cout<<"INDEX->"<<index<<std::endl;

    
}


void PhoneBook::SEARCH()
{
    std::string str;
    std::cout<<"Please input index"<<std::endl;
    std::getline(std::cin, str);
    std::cout<<contact[0].get_nickname()<<std::endl;
}













