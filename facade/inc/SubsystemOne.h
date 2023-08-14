#pragma once
#include <memory>
#include <string>
#include <iostream>
namespace ketop { namespace dp {

class SubsystemOne {
public:
    void init()
    {
        std::cout << "SubsystemOne init oK" << std::endl;
    }
    void execute()
    {
        std::cout << "SubsystemOne execute oK" << std::endl;
    }
    void display()
    {
       std::cout << "SubsystemOne display oK" << std::endl;
    }

};

} } 