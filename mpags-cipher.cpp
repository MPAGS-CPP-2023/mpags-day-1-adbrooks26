#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs{argv,argv+argc};

    for(std::size_t i{0};i<cmdLineArgs.size();i++)
    { 

        if(cmdLineArgs[i] == "-h" or cmdLineArgs[i] == "--help")
        {
            std::cout << "Help Text" << std::endl;
            continue;
        }
        
        if(cmdLineArgs[i] == "--version")
        {
            std::cout << "version 1.0.0" << std::endl;
            continue;
        }
        
        if(cmdLineArgs[i] == "-i")
        {
            std::cout << "Input File:   " << cmdLineArgs[i+1] << std::endl;
            i++;
            continue;
        }
        
        if(cmdLineArgs[i] == "-o")
        {
            std::cout << "Output File:  " << cmdLineArgs[i+1] << std::endl;
            i++;
            continue;
        }

    }

}
