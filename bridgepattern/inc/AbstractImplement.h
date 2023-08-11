#pragma once
#include <iostream>

namespace ketop { namespace dp{

class AbstractImplement 
{
public:
    virtual ~AbstractImplement() = default; 
    virtual void implement() = 0;
};

} }