#pragma once
#include <iostream>

namespace ketop { namespace dp{

class Chicken 
{
public:
    Chicken() = default;
    void walk()
    {
        std::cout << "chicken walk with our drumstick" << std::endl;
    }
    void crow()
    {
        std::cout << "crow" << std::endl;
    }
};

} }