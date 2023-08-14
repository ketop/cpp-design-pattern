#pragma once
#include <memory>
#include <string>
namespace ketop { namespace dp {

class SubsystemTwo {
public:
    void prepare()
    {

        std::cout << "SubsystemTwo prepare oK" << std::endl;

    }
    void work()
    {
        std::cout << "SubsystemTwo work oK" << std::endl;

    }
    void show()
    {
        std::cout << "SubsystemTwo show oK" << std::endl;
    }

};

} } 