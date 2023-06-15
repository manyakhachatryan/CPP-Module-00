#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook1;
    std::string str;
    while(1)
    {
    std::cout<<"please choose commands"<<std::endl;
    std::cout<<"ADD    SEARCH    EXIT "<<std::endl;
        std::getline(std::cin, str);
        if(str.compare("ADD")==0){
          PhoneBook1.ADD();
        } else if(str.compare("SEARCH")==0){
            PhoneBook1.SEARCH();
        } else if(str.compare("EXIT")==0){
            return (0);
        } else {
             std::cout<<"Invalid command"<<std::endl;
        }
        if(std::cin.eof())
        {
            return 0;
        }   
    }

    // a.set_first_name("Manya");
    return 0;
}