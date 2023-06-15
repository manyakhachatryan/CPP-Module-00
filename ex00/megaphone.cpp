#include <iostream>

int main(int argc, char **argv){
    int i;
    int j;

    j = 1;
    i = 0;
    if(argc > 1)
    {
        while(j < argc)
        {
            i = 0;
            while(argv[j][i])
            {
                std::putchar(std::toupper(argv[j][i]));
                i++;
            }
            std::cout<<" ";
            j++;
        }
    }
    else if(argc == 1)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout<<std::endl;
    return 0;
}

