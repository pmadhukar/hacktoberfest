#include <iostream>
#include <stdlib.h>

unsigned short countdown(unsigned short num)
{
    if(!num)
    {
        std::cout << num << std::endl;
        return countdown(num--);
    }
    else
    {
        std::cerr << "Boooom" << std::endl;
        exit(-1);
    }
}

int main(int argc, char const *argv[])
{
    if(argc == 2)
    {
        countdown(static_cast<unsigned int>argv[1]);
        return EXIT_SUCCESS;
    }
    else
    {
        std::cerr << "usage: countdown [NUM]" << std::endl;
        return EXIT_FAILURE;
    }
}
