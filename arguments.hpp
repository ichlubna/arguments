#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

class Arguments
{
    public: 
    using ArgList = std::unordered_map<std::string, std::string>;

    Arguments(int argc, char** argv)
    {
        std::vector<std::string> args(argv + 1, argv + argc);
        for (auto a : args)
            std::cerr << a << std::endl; 
    }
    
    const ArgList getArguments() const;

    private:
    ArgList argumentList;
};
