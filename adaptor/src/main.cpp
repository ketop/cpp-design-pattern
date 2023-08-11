#include <cassert>
#include <iostream>
#include <memory>
#include "Duck.h"
#include "ChickenDuckAdaptor.h"
#include "ChickenDuckAdaptorB.h"

using namespace ketop::dp;


int main()
{
    //inherit
    std::shared_ptr<Duck> di = std::make_shared<ChickenDuckAdaptor>();
    di->duckYeah();
    std::shared_ptr<Chicken> ci = std::dynamic_pointer_cast<Chicken>(di);
    ci->walk();

    //combine
    std::shared_ptr<Duck> di2 = std::make_shared<ChickenDuckAdaptorB>();
    di2->duckYeah();
    std::shared_ptr<Chicken> ci2 = std::dynamic_pointer_cast<Chicken>(di2);
    if(!ci2)
    {
        std::cout << "unable to translate" << std::endl;
    }else {
        ci2->walk();
    }

    return 0;
}