
#pragma once
#include <iostream>

namespace ketop { namespace dp{

class AbstractInterface
{
public:
    ~AbstractInterface() = default;
    virtual void operation() = 0;
};

} }