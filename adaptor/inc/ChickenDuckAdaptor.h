
#pragma once
#include "Chicken.h"
#include "Duck.h"
#include <iostream>

namespace ketop { namespace dp{

class ChickenDuckAdaptor:public Duck, Chicken
{
public:
    ChickenDuckAdaptor() = default;
    void duckYeah() override
    {
        crow();
    }

};

} }