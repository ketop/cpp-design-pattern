
#pragma once
#include "Chicken.h"
#include "Duck.h"
#include <iostream>
#include <memory>

namespace ketop { namespace dp{

class ChickenDuckAdaptorB:public Duck
{
public:
    ChickenDuckAdaptorB() : spChicken(new Chicken()){}
    void duckYeah() override
    {
        spChicken->crow();
    }
private:
    std::shared_ptr<Chicken> spChicken;

};

} }