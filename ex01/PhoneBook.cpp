#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
   index = 0;
   count = 0;
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
    if (all_char(str) || str.length() == 0)
    {
        if(std::cin.eof())
        {
            return ;
        } 
        std::cout<<"Input is not correct , please try again "<<std::endl;
        goto label1;
    }
    contact[index].set_first_name(str);

    std::cout<<"Please input your last name"<<std::endl;
    label2:
    std::getline(std::cin, str);    
    if (all_char(str) || str.length() == 0)
    {
        if(std::cin.eof())
        {
            return ;
        } 
        std::cout<<"Input is not correct , please try again "<<std::endl;
        goto label2;
    }
    contact[index].set_last_name(str);

    std::cout<<"Please input your nickname"<<std::endl;
    label5:
    std::getline(std::cin, str);
    if(str.length()==0)
    {
        if(std::cin.eof())
        {
            return ;
        } 
        std::cout<<"Input is not correct , please try again "<<std::endl;
        goto label5;
    }
    contact[index].set_nickname(str);
 
    std::cout<<"Please input your phone number"<<std::endl;
    label3:
    std::getline(std::cin, str);
    if(all_digit(str) || str.length() == 0)
    {
        if(std::cin.eof())
        {
            return ;
        } 
        std::cout<<"Input is not correct , please try again "<<std::endl;
        goto label3;
    }   
    contact[index].set_phone_number(str);
        std::cout<<"Please input your darkest_secret"<<std::endl;
    label4:
        std::getline(std::cin, str);
    if(str.length() == 0)
    {
        if(std::cin.eof())
        {
            return ;
        } 
        std::cout<<"Input is not correct , please try again "<<std::endl;
        goto label4;
    }
        contact[index].set_darkest_secret(str);
        index++;
        count++;   
}

void PhoneBook::print_part_str(std::string str)
{
    int i;

    i = 0;
    while(i < 9)
    {
        std::cout<<str[i];
        i++;
    }
    std::cout<<".";
}
void PhoneBook::print_space(int len)
{
    while (len)
    {
        std::cout<<" ";
        len--;
    }
}

void PhoneBook::SEARCH()
{
    int i = 0;
    int true_len = 10;
    int smt = 0;
    while((contact[i].get_first_name()).length() !=0)
    { 
        std::cout<<"         ";
        std::cout<<i;
        std::cout<<"|";
        if((contact[i].get_first_name()).length() <=10)
        {
            print_space(true_len - contact[i].get_first_name().length());
            std::cout<<contact[i].get_first_name()<<"|";
        }
        else 
        {
            print_part_str(contact[i].get_first_name());
            std::cout<<"|";
        }
        if(contact[i].get_last_name().length() < 10)
        {
            print_space(true_len - (contact[i].get_last_name()).length());
            std::cout<<contact[i].get_last_name()<<"|";
        }
        else 
        {
            print_part_str(contact[i].get_last_name());
        std::cout<<"|";
        }
        if((contact[i].get_nickname()).length() < 10)
        {
            smt = true_len - (contact[i].get_nickname()).length();
            print_space(smt);
            std::cout<<contact[i].get_nickname();
        }
         else print_part_str(contact[i].get_nickname());
           std::cout<<std::endl;
        i++;
    }

    std::cout<<"Search for index"<<std::endl;
    std::string a;
    std::getline(std::cin, a);
    if(a.length() == 1 && a[0]>='0' && a[0] <= '7')
    {
        int x = atoi(a.c_str());
        if(x>=0 && x<=7 && x<count)
        {
            std::cout<<contact[x].get_first_name()<<std::endl;
            std::cout<<contact[x].get_last_name()<<std::endl;
            std::cout<<contact[x].get_nickname()<<std::endl;
            std::cout<<contact[x].get_phone_number()<<std::endl;
            std::cout<<contact[x].get_darkest_secret()<<std::endl;
        }  
        else 
        {
            std::cout<<"This contact does not exist "<<std::endl;
        }
    } 
    else 
    {
      std::cout<<"invalid index"<<std::endl;
    }
    if(std::cin.eof())
    {
            return ;
    }   
}













