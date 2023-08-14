#pragma once
#include "Component.h"
#include <iostream>
#include <string>
#include <memory>

namespace ketop { namespace dp{

class LeafComponent: public Component
{
public:
    ~LeafComponent()
    {
        std::cout << "(" << __FILE_NAME__ << ":" << __LINE__ << ")" << __func__ << std::endl;
    }
    std::string operation() override
    {
        return std::string{"Leaf"};
    }
private:
};

} }